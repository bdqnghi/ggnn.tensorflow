public String toString(String indent) {
    StringBuilder buffer = new StringBuilder(128);
    buffer.append(indent);
    buffer.append('<');
    buffer.append(name);
    if (attributes != null) {
        for (Entry<String, String> entry : attributes.entries()) {
            buffer.append(' ');
            buffer.append(entry.key);
            buffer.append("=\"");
            buffer.append(entry.value);
            buffer.append('\"');
        }
    }
    if (children == null && (text == null || text.length() == 0))
        buffer.append("/>");
    else {
        buffer.append(">\n");
        String childIndent = indent + '\t';
        if (text != null && text.length() > 0) {
            buffer.append(childIndent);
            buffer.append(text);
            buffer.append('\n');
        }
        if (children != null) {
            for (Element child : children) {
                buffer.append(child.toString(childIndent));
                buffer.append('\n');
            }
        }
        buffer.append(indent);
        buffer.append("</");
        buffer.append(name);
        buffer.append('>');
    }
    return buffer.toString();
}
