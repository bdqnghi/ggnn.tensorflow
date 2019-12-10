/**
 * Sets the bounding box minimum and maximum vector from the given points.
 *
 * @param points The points.
 * @return This bounding box for chaining.
 */
public BoundingBox set(List<Vector3> points) {
    this.inf();
    for (Vector3 l_point : points) this.ext(l_point);
    return this;
}
