private boolean match(String file, String[] patterns) {
    return new AntPathMatcher().match(file, patterns);
}
