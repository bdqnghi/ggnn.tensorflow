/**
 * @param name the name of the children
 * @return the children with the given name or an empty {@link Array}
 */
public Array<Element> getChildrenByName(String name) {
    Array<Element> result = new Array<Element>();
    if (children == null)
        return result;
    for (int i = 0; i < children.size; i++) {
        Element child = children.get(i);
        if (child.name.equals(name))
            result.add(child);
    }
    return result;
}
