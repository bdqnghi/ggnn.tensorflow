public XmlWriter pop() throws IOException {
    if (currentElement != null) {
        writer.write("/>\n");
        currentElement = null;
    } else {
        indent = Math.max(indent - 1, 0);
        if (indentNextClose)
            indent();
        writer.write("</");
        writer.write(stack.pop());
        writer.write(">\n");
    }
    indentNextClose = true;
    return this;
}
