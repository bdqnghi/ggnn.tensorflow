/**
 * Extends the bounding box with the bounds of this model instance. This is a potential slow operation, it is advised to cache
 * the result.
 * @param out the {@link BoundingBox} that will be extended with the bounds.
 * @return the out parameter for chaining
 */
public BoundingBox extendBoundingBox(final BoundingBox out) {
    final int n = nodes.size;
    for (int i = 0; i < n; i++) nodes.get(i).extendBoundingBox(out);
    return out;
}
