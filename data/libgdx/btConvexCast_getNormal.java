public btVector3 getNormal() {
    long cPtr = CollisionJNI.btConvexCast_CastResult_normal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
