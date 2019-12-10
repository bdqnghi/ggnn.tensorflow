public void setF(btVector3 value) {
    SoftbodyJNI.btSoftBody_Node_f_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
