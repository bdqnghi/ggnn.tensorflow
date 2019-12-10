/**
 * Adds a case insensitive suffix for matching input files.
 */
public FileProcessor addInputSuffix(String... suffixes) {
    for (String suffix : suffixes) addInputRegex("(?i).*" + Pattern.quote(suffix));
    return this;
}
