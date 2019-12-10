public void setInitialWorldTransform(btTransform value) {
    SoftbodyJNI.btSoftBody_initialWorldTransform_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
