/**
 * Sets this {@link Circle}'s values in terms of its center and a point on its edge.
 *
 * @param center The new center of the circle
 * @param edge Any point on the edge of the given circle
 */
public void set(Vector2 center, Vector2 edge) {
    this.x = center.x;
    this.y = center.y;
    this.radius = Vector2.len(center.x - edge.x, center.y - edge.y);
}
