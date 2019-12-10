/**
 * Returns the bounding box for all active particles. z axis will always be zero.
 */
public BoundingBox getBoundingBox() {
    if (bounds == null)
        bounds = new BoundingBox();
    BoundingBox bounds = this.bounds;
    bounds.inf();
    for (ParticleEmitter emitter : this.emitters) bounds.ext(emitter.getBoundingBox());
    return bounds;
}
