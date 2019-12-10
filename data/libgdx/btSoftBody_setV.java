public void setV(btVector3 value) {
    SoftbodyJNI.btSoftBody_Node_v_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
