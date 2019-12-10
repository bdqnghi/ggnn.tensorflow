public void setPosition(btVector3 value) {
    SoftbodyJNI.btSoftBody_LJoint_Specs_position_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
