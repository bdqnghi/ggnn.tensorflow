public btVector3DoubleData getLinearSpringDamping() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_linearSpringDamping_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
