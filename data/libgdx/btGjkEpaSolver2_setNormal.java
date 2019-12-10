public void setNormal(btVector3 value) {
    CollisionJNI.btGjkEpaSolver2_sResults_normal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
