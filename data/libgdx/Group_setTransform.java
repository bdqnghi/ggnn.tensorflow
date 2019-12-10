/**
 * When true (the default), the Batch is transformed so children are drawn in their parent's coordinate system. This has a
 * performance impact because {@link Batch#flush()} must be done before and after the transform. If the actors in a group are
 * not rotated or scaled, then the transform for the group can be set to false. In this case, each child's position will be
 * offset by the group's position for drawing, causing the children to appear in the correct location even though the Batch has
 * not been transformed.
 */
public void setTransform(boolean transform) {
    this.transform = transform;
}
