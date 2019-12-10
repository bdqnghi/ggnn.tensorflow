/**
 * Creates a nested copy of this Node, any child nodes are copied using this method as well. The {@link #parts} are copied
 * using the {@link NodePart#copy()} method. Note that that method copies the material and nodes (bones) by reference. If you
 * intend to use the copy in a different node tree (e.g. a different Model or ModelInstance) then you will need to update these
 * references afterwards.
 *
 * Override this method in your custom Node class to instantiate that class, in that case you should override the
 * {@link #set(Node)} method as well.
 */
public Node copy() {
    return new Node().set(this);
}
