// This code is needed because a simple replacement like
// pattern.replace("'", "''").replace("{{", "'{'");
// can't properly manage some special cases.
// For example, the expected output for {{{{ is {{ but you get {'{ instead.
// Also this code is optimized since a new string is returned only if something has been replaced.
private String replaceEscapeChars(String pattern) {
    buffer.setLength(0);
    boolean changed = false;
    int len = pattern.length();
    for (int i = 0; i < len; i++) {
        char ch = pattern.charAt(i);
        if (ch == '\'') {
            changed = true;
            buffer.append("''");
        } else if (ch == '{') {
            int j = i + 1;
            while (j < len && pattern.charAt(j) == '{') j++;
            int escaped = (j - i) / 2;
            if (escaped > 0) {
                changed = true;
                buffer.append('\'');
                do {
                    buffer.append('{');
                } while ((--escaped) > 0);
                buffer.append('\'');
            }
            if ((j - i) % 2 != 0)
                buffer.append('{');
            i = j - 1;
        } else {
            buffer.append(ch);
        }
    }
    return changed ? buffer.toString() : pattern;
}
