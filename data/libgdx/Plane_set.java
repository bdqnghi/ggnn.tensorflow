/**
 * Sets this plane from the given plane
 *
 * @param plane the plane
 */
public void set(Plane plane) {
    this.normal.set(plane.normal);
    this.d = plane.d;
}
