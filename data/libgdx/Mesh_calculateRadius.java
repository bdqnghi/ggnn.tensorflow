/**
 * Calculates the squared radius of the bounding sphere around the specified center for the specified part.
 * @param center The center of the bounding sphere
 * @return the squared radius of the bounding sphere.
 */
public float calculateRadius(final Vector3 center) {
    return calculateRadius(center.x, center.y, center.z, 0, getNumIndices(), null);
}
