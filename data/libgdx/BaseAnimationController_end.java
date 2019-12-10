/**
 * End applying multiple animations to the instance and update it to reflect the changes.
 */
protected void end() {
    if (!applying)
        throw new GdxRuntimeException("You must call begin() first");
    for (Entry<Node, Transform> entry : transforms.entries()) {
        entry.value.toMatrix4(entry.key.localTransform);
        transformPool.free(entry.value);
    }
    transforms.clear();
    target.calculateTransforms();
    applying = false;
}
