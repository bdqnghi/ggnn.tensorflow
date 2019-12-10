public btVector3Array getHitNormalWorld() {
    long cPtr = CollisionJNI.AllHitsRayResultCallback_hitNormalWorld_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
