/**
 * Returns this node or the child node with the specified object, or null.
 */
public Node findNode(Object object) {
    if (object == null)
        throw new IllegalArgumentException("object cannot be null.");
    if (object.equals(this.object))
        return this;
    return Tree.findNode(children, object);
}
