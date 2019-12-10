private static void write(BufferedWriter wr, String input) throws IOException {
    int delta = StringUtils.countMatches(input, '{') - StringUtils.countMatches(input, '}');
    indent += delta *= 4;
    indent = clamp(indent);
    if (delta > 0) {
        wr.write(StringUtils.repeat(" ", clamp(indent - 4)) + input + "\n");
    } else if (delta < 0) {
        wr.write(StringUtils.repeat(" ", clamp(indent)) + input + "\n");
    } else {
        wr.write(StringUtils.repeat(" ", indent) + input + "\n");
    }
}
