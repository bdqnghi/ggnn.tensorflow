public btTransform getHitTransformB() {
    long cPtr = CollisionJNI.btConvexCast_CastResult_hitTransformB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
