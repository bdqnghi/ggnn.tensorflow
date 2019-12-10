/**
 * If the child node or attribute doesn't exist, it is created. Usage example: Node property =
 * getFirstChildByAttrValue(properties, "property", "name");
 */
private static Node getFirstChildByNameAttrValue(Node node, String childName, String attr, String value) {
    NodeList childNodes = node.getChildNodes();
    for (int i = 0; i < childNodes.getLength(); i++) {
        if (childNodes.item(i).getNodeName().equals(childName)) {
            NamedNodeMap attributes = childNodes.item(i).getAttributes();
            Node attribute = attributes.getNamedItem(attr);
            if (attribute.getNodeValue().equals(value))
                return childNodes.item(i);
        }
    }
    Node newNode = node.getOwnerDocument().createElement(childName);
    NamedNodeMap attributes = newNode.getAttributes();
    Attr nodeAttr = node.getOwnerDocument().createAttribute(attr);
    nodeAttr.setNodeValue(value);
    attributes.setNamedItem(nodeAttr);
    if (childNodes.item(0) != null) {
        return node.insertBefore(newNode, childNodes.item(0));
    } else {
        return node.appendChild(newNode);
    }
}
