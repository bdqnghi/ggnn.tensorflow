private String unescape(String value) {
    int length = value.length();
    StringBuilder buffer = new StringBuilder(length + 16);
    for (int i = 0; i < length; ) {
        char c = value.charAt(i++);
        if (c != '\\') {
            buffer.append(c);
            continue;
        }
        if (i == length)
            break;
        c = value.charAt(i++);
        if (c == 'u') {
            buffer.append(Character.toChars(Integer.parseInt(value.substring(i, i + 4), 16)));
            i += 4;
            continue;
        }
        switch(c) {
            case '"':
            case '\\':
            case '/':
                break;
            case 'b':
                c = '\b';
                break;
            case 'f':
                c = '\f';
                break;
            case 'n':
                c = '\n';
                break;
            case 'r':
                c = '\r';
                break;
            case 't':
                c = '\t';
                break;
            default:
                throw new SerializationException("Illegal escaped character: \\" + c);
        }
        buffer.append(c);
    }
    return buffer.toString();
}
