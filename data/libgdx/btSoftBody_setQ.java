public void setQ(btVector3 value) {
    SoftbodyJNI.btSoftBody_Node_q_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
