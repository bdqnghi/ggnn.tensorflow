public FileProcessor addInputRegex(String... regexes) {
    for (String regex : regexes) inputRegex.add(Pattern.compile(regex));
    return this;
}
