public String quoteName(String value) {
    StringBuilder buffer = new StringBuilder(value);
    buffer.replace('\\', "\\\\").replace('\r', "\\r").replace('\n', "\\n").replace('\t', "\\t");
    switch(this) {
        case minimal:
            if (!value.contains("//") && !value.contains("/*") && minimalNamePattern.matcher(buffer).matches())
                return buffer.toString();
        case javascript:
            if (javascriptPattern.matcher(buffer).matches())
                return buffer.toString();
    }
    return '"' + buffer.replace('"', "\\\"").toString() + '"';
}
