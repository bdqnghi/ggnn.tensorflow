public void setHitPoint(btVector3 value) {
    CollisionJNI.btConvexCast_CastResult_hitPoint_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
