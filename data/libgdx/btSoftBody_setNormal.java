public void setNormal(btVector3 value) {
    SoftbodyJNI.btSoftBody_CJoint_normal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
