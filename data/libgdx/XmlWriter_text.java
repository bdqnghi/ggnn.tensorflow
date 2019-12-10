public XmlWriter text(Object text) throws IOException {
    startElementContent();
    String string = text == null ? "null" : text.toString();
    indentNextClose = string.length() > 64;
    if (indentNextClose) {
        writer.write('\n');
        indent();
    }
    writer.write(string);
    if (indentNextClose)
        writer.write('\n');
    return this;
}
