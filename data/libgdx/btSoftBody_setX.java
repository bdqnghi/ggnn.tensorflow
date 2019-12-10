public void setX(btVector3 value) {
    SoftbodyJNI.btSoftBody_Node_x_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
