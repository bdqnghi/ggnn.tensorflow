public void setMax(btVector3 value) {
    CollisionJNI.btAABB_max_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
