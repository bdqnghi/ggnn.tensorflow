public btTypedConstraint getConstraint(int index) {
    long cPtr = DynamicsJNI.btDynamicsWorld_getConstraint__SWIG_0(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btTypedConstraint(cPtr, false);
}
