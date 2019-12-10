/**
 * Calculates the local and world transform of this node and optionally all its children.
 *
 * @param recursive whether to calculate the local/world transforms for children.
 */
public void calculateTransforms(boolean recursive) {
    calculateLocalTransform();
    calculateWorldTransform();
    if (recursive) {
        for (Node child : children) {
            child.calculateTransforms(true);
        }
    }
}
