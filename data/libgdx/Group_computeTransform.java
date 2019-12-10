/**
 * Returns the transform for this group's coordinate system.
 */
protected Matrix4 computeTransform() {
    Affine2 worldTransform = this.worldTransform;
    float originX = this.originX;
    float originY = this.originY;
    float rotation = this.rotation;
    float scaleX = this.scaleX;
    float scaleY = this.scaleY;
    worldTransform.setToTrnRotScl(x + originX, y + originY, rotation, scaleX, scaleY);
    if (originX != 0 || originY != 0)
        worldTransform.translate(-originX, -originY);
    // Find the first parent that transforms.
    Group parentGroup = parent;
    while (parentGroup != null) {
        if (parentGroup.transform)
            break;
        parentGroup = parentGroup.parent;
    }
    if (parentGroup != null)
        worldTransform.preMul(parentGroup.worldTransform);
    computedTransform.set(worldTransform);
    return computedTransform;
}
