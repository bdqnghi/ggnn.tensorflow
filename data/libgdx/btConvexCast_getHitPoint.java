public btVector3 getHitPoint() {
    long cPtr = CollisionJNI.btConvexCast_CastResult_hitPoint_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
