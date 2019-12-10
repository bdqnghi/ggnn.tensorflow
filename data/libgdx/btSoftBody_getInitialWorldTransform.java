public btTransform getInitialWorldTransform() {
    long cPtr = SoftbodyJNI.btSoftBody_initialWorldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
