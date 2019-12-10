/**
 * Creates a nested copy of this Node, any child nodes are copied using the {@link #copy()} method. This will detach this node
 * from its parent, but does not attach it to the parent of node being copied. The {@link #parts} are copied using the
 * {@link NodePart#copy()} method. Note that that method copies the material and nodes (bones) by reference. If you intend to
 * use this node in a different node tree (e.g. a different Model or ModelInstance) then you will need to update these
 * references afterwards.
 *
 * Override this method in your custom Node class to copy any additional fields you've added.
 * @return This Node for chaining
 */
protected Node set(Node other) {
    detach();
    id = other.id;
    isAnimated = other.isAnimated;
    inheritTransform = other.inheritTransform;
    translation.set(other.translation);
    rotation.set(other.rotation);
    scale.set(other.scale);
    localTransform.set(other.localTransform);
    globalTransform.set(other.globalTransform);
    parts.clear();
    for (NodePart nodePart : other.parts) {
        parts.add(nodePart.copy());
    }
    children.clear();
    for (Node child : other.getChildren()) {
        addChild(child.copy());
    }
    return this;
}
