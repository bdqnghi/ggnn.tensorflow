public XmlWriter element(String name, Object text) throws IOException {
    return element(name).text(text).pop();
}
