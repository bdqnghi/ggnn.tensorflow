private static void writeComment(Writer writer, String comment) throws IOException {
    writer.write("#");
    int len = comment.length();
    int curIndex = 0;
    int lastIndex = 0;
    while (curIndex < len) {
        char c = comment.charAt(curIndex);
        if (c > '\u00ff' || c == '\n' || c == '\r') {
            if (lastIndex != curIndex)
                writer.write(comment.substring(lastIndex, curIndex));
            if (c > '\u00ff') {
                String hex = Integer.toHexString(c);
                writer.write("\\u");
                for (int j = 0; j < 4 - hex.length(); j++) {
                    writer.write('0');
                }
                writer.write(hex);
            } else {
                writer.write(LINE_SEPARATOR);
                if (c == '\r' && curIndex != len - 1 && comment.charAt(curIndex + 1) == '\n') {
                    curIndex++;
                }
                if (curIndex == len - 1 || (comment.charAt(curIndex + 1) != '#' && comment.charAt(curIndex + 1) != '!'))
                    writer.write("#");
            }
            lastIndex = curIndex + 1;
        }
        curIndex++;
    }
    if (lastIndex != curIndex)
        writer.write(comment.substring(lastIndex, curIndex));
    writer.write(LINE_SEPARATOR);
}
