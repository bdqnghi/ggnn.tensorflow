/**
 * @throws GdxRuntimeException if the element has no children.
 */
public Element getChild(int index) {
    if (children == null)
        throw new GdxRuntimeException("Element has no children: " + name);
    return children.get(index);
}
