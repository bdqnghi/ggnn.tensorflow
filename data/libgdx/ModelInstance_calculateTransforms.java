/**
 * Calculates the local and world transform of all {@link Node} instances in this model, recursively. First each
 * {@link Node#localTransform} transform is calculated based on the translation, rotation and scale of each Node. Then each
 * {@link Node#calculateWorldTransform()} is calculated, based on the parent's world transform and the local transform of each
 * Node. Finally, the animation bone matrices are updated accordingly.</p>
 *
 * This method can be used to recalculate all transforms if any of the Node's local properties (translation, rotation, scale)
 * was modified.
 */
public void calculateTransforms() {
    final int n = nodes.size;
    for (int i = 0; i < n; i++) {
        nodes.get(i).calculateTransforms(true);
    }
    for (int i = 0; i < n; i++) {
        nodes.get(i).calculateBoneTransforms(true);
    }
}
