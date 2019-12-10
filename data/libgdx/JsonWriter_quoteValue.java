public String quoteValue(Object value) {
    if (value == null)
        return "null";
    String string = value.toString();
    if (value instanceof Number || value instanceof Boolean)
        return string;
    StringBuilder buffer = new StringBuilder(string);
    buffer.replace('\\', "\\\\").replace('\r', "\\r").replace('\n', "\\n").replace('\t', "\\t");
    if (this == OutputType.minimal && !string.equals("true") && !string.equals("false") && !string.equals("null") && !string.contains("//") && !string.contains("/*")) {
        int length = buffer.length();
        if (length > 0 && buffer.charAt(length - 1) != ' ' && minimalValuePattern.matcher(buffer).matches())
            return buffer.toString();
    }
    return '"' + buffer.replace('"', "\\\"").toString() + '"';
}
