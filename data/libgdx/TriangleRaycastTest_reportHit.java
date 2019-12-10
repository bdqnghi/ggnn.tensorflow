@Override
public float reportHit(Vector3 hitNormalLocal, float hitFraction, int partId, int triangleIndex) {
    // We need to find the lowest hitFraction since the super class does not handle it for us.
    if (hitFraction < this.hitFraction) {
        this.hitNormalLocal.set(hitNormalLocal);
        this.hitFraction = hitFraction;
        this.partId = partId;
        this.triangleIndex = triangleIndex;
    }
    return hitFraction;
}
