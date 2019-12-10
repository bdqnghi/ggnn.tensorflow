/**
 * If the child node doesn't exist, it is created.
 */
private static Node getFirstChildNodeByName(Node parent, String child) {
    NodeList childNodes = parent.getChildNodes();
    for (int i = 0; i < childNodes.getLength(); i++) {
        if (childNodes.item(i).getNodeName().equals(child)) {
            return childNodes.item(i);
        }
    }
    Node newNode = parent.getOwnerDocument().createElement(child);
    if (childNodes.item(0) != null)
        return parent.insertBefore(newNode, childNodes.item(0));
    else
        return parent.appendChild(newNode);
}
