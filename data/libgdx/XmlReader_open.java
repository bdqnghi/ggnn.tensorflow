// line 209 "XmlReader.rl"
protected void open(String name) {
    Element child = new Element(name, current);
    Element parent = current;
    if (parent != null)
        parent.addChild(child);
    elements.add(child);
    current = child;
}
