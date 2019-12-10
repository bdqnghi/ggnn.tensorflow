/**
 * Returns the bounding box for all active particles. z axis will always be zero.
 */
public BoundingBox getBoundingBox() {
    if (bounds == null)
        bounds = new BoundingBox();
    Particle[] particles = this.particles;
    boolean[] active = this.active;
    BoundingBox bounds = this.bounds;
    bounds.inf();
    for (int i = 0, n = active.length; i < n; i++) if (active[i]) {
        Rectangle r = particles[i].getBoundingRectangle();
        bounds.ext(r.x, r.y, 0);
        bounds.ext(r.x + r.width, r.y + r.height, 0);
    }
    return bounds;
}
