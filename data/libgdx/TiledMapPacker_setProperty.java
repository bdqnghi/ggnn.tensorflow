private static void setProperty(Document doc, Node parent, String name, String value) {
    Node properties = getFirstChildNodeByName(parent, "properties");
    Node property = getFirstChildByNameAttrValue(properties, "property", "name", name);
    NamedNodeMap attributes = property.getAttributes();
    Node valueNode = attributes.getNamedItem("value");
    if (valueNode == null) {
        valueNode = doc.createAttribute("value");
        valueNode.setNodeValue(value);
        attributes.setNamedItem(valueNode);
    } else {
        valueNode.setNodeValue(value);
    }
}
