public void setOffset(btVector3 value) {
    SoftbodyJNI.btSoftBody_Note_offset_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
