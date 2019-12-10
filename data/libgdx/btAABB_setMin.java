public void setMin(btVector3 value) {
    CollisionJNI.btAABB_min_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
