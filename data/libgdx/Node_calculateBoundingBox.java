/**
 * Calculate the bounding box of this Node. This is a potential slow operation, it is advised to cache the result.
 */
public BoundingBox calculateBoundingBox(final BoundingBox out, boolean transform) {
    out.inf();
    return extendBoundingBox(out, transform);
}
