public void setRpos(btVector3 value) {
    SoftbodyJNI.btSoftBody_CJoint_rpos_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
