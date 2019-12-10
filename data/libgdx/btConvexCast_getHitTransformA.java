public btTransform getHitTransformA() {
    long cPtr = CollisionJNI.btConvexCast_CastResult_hitTransformA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
