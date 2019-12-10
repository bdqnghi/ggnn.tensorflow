public XmlWriter attribute(String name, Object value) throws IOException {
    if (currentElement == null)
        throw new IllegalStateException();
    writer.write(' ');
    writer.write(name);
    writer.write("=\"");
    writer.write(value == null ? "null" : value.toString());
    writer.write('"');
    return this;
}
