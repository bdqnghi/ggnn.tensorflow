public void setAxis(btVector3 value) {
    SoftbodyJNI.btSoftBody_AJoint_axis_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
