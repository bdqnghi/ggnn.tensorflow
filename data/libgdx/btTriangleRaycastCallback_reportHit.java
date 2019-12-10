public float reportHit(Vector3 hitNormalLocal, float hitFraction, int partId, int triangleIndex) {
    return CollisionJNI.btTriangleRaycastCallback_reportHit(swigCPtr, this, hitNormalLocal, hitFraction, partId, triangleIndex);
}
