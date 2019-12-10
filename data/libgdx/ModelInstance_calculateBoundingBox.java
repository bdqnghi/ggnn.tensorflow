/**
 * Calculate the bounding box of this model instance. This is a potential slow operation, it is advised to cache the result.
 * @param out the {@link BoundingBox} that will be set with the bounds.
 * @return the out parameter for chaining
 */
public BoundingBox calculateBoundingBox(final BoundingBox out) {
    out.inf();
    return extendBoundingBox(out);
}
