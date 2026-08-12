package com.simstrate.tools;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class FlagRefs {
    public static void main(String[] args) throws IOException {
        Path root = Paths.get(args.length > 0 ? args[0] : ".");
        List<Pattern> patterns = new ArrayList<>();

        if (args.length > 1) {
            for (int i = 1; i < args.length; i++) {
                patterns.add(Pattern.compile(Pattern.quote(args[i]), Pattern.CASE_INSENSITIVE));
            }
        } else {
            // défaut : termes probables pour un drapeau/licence
            String[] defaults = new String[]{"Nouveau jeu", "new game", "license", "licence", "flag", "cle", "key", "trial"};
            for (String s : defaults) patterns.add(Pattern.compile(Pattern.quote(s), Pattern.CASE_INSENSITIVE));
        }

        Files.walk(root)
            .filter(Files::isRegularFile)
            .forEach(p -> {
                try {
                    List<String> lines = Files.readAllLines(p, StandardCharsets.UTF_8);
                    for (int i = 0; i < lines.size(); i++) {
                        String line = lines.get(i);
                        for (Pattern pat : patterns) {
                            Matcher m = pat.matcher(line);
                            if (m.find()) {
                                System.out.printf("%s:%d: %s\n", root.relativize(p), i+1, line.trim());
                                break;
                            }
                        }
                    }
                } catch (IOException e) {
                    // ignore files that can't be read as text
                }
            });
    }
}
