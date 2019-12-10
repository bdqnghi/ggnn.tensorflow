public float reportHit(Vector3 hitNormalLocal, Vector3 hitPointLocal, float hitFraction, int partId, int triangleIndex) {
    return CollisionJNI.btTriangleConvexcastCallback_reportHit(swigCPtr, this, hitNormalLocal, hitPointLocal, hitFraction, partId, triangleIndex);
}
