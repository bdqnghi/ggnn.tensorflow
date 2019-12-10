public void setLocal(btVector3 value) {
    SoftbodyJNI.btSoftBody_Anchor_local_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
