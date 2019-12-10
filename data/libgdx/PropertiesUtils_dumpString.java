private static void dumpString(StringBuilder outBuffer, String string, boolean escapeSpace, boolean escapeUnicode) {
    int len = string.length();
    for (int i = 0; i < len; i++) {
        char ch = string.charAt(i);
        // Handle common case first
        if ((ch > 61) && (ch < 127)) {
            outBuffer.append(ch == '\\' ? "\\\\" : ch);
            continue;
        }
        switch(ch) {
            case ' ':
                if (i == 0 || escapeSpace)
                    outBuffer.append("\\ ");
                break;
            case '\n':
                outBuffer.append("\\n");
                break;
            case '\r':
                outBuffer.append("\\r");
                break;
            case '\t':
                outBuffer.append("\\t");
                break;
            case '\f':
                outBuffer.append("\\f");
                break;
            // Fall through
            case '=':
            // Fall through
            case ':':
            // Fall through
            case '#':
            case '!':
                outBuffer.append('\\').append(ch);
                break;
            default:
                if (((ch < 0x0020) || (ch > 0x007e)) & escapeUnicode) {
                    String hex = Integer.toHexString(ch);
                    outBuffer.append("\\u");
                    for (int j = 0; j < 4 - hex.length(); j++) {
                        outBuffer.append('0');
                    }
                    outBuffer.append(hex);
                } else {
                    outBuffer.append(ch);
                }
                break;
        }
    }
}
