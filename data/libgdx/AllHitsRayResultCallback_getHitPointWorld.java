public btVector3Array getHitPointWorld() {
    long cPtr = CollisionJNI.AllHitsRayResultCallback_hitPointWorld_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
