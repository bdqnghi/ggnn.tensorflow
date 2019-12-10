/**
 * Calculate the {@link BoundingBox} of the specified part.
 * @param out the bounding box to store the result in.
 * @param offset the start index of the part.
 * @param count the amount of indices the part contains.
 * @return the value specified by out.
 */
public BoundingBox calculateBoundingBox(final BoundingBox out, int offset, int count, final Matrix4 transform) {
    return extendBoundingBox(out.inf(), offset, count, transform);
}
