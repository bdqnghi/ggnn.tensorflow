public btVector3 getHitNormalLocal() {
    long cPtr = CollisionJNI.LocalRayResult_hitNormalLocal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
