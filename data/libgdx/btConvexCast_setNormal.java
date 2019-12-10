public void setNormal(btVector3 value) {
    CollisionJNI.btConvexCast_CastResult_normal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
