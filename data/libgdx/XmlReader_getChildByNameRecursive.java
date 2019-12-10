/**
 * @param name the name of the child {@link Element}
 * @return the first child having the given name or null, recurses
 */
public Element getChildByNameRecursive(String name) {
    if (children == null)
        return null;
    for (int i = 0; i < children.size; i++) {
        Element element = children.get(i);
        if (element.name.equals(name))
            return element;
        Element found = element.getChildByNameRecursive(name);
        if (found != null)
            return found;
    }
    return null;
}
