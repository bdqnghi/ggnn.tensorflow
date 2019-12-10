/**
 * Calculates and updates the {@link #center}, {@link #halfExtents} and {@link #radius} values. This is considered a costly
 * operation and should not be called frequently. All vertices (points) of the shape are traversed to calculate the maximum and
 * minimum x, y and z coordinate of the shape. Note that MeshPart is not aware of any transformation that might be applied when
 * rendering. It calculates the untransformed (not moved, not scaled, not rotated) values.
 */
public void update() {
    mesh.calculateBoundingBox(bounds, offset, size);
    bounds.getCenter(center);
    bounds.getDimensions(halfExtents).scl(0.5f);
    radius = halfExtents.len();
}
