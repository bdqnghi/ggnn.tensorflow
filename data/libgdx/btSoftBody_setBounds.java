public void setBounds(btVector3 value) {
    SoftbodyJNI.btSoftBody_bounds_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
