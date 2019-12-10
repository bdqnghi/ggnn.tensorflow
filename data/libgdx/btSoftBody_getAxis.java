public btVector3 getAxis() {
    long cPtr = SoftbodyJNI.btSoftBody_AJoint_axis_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
