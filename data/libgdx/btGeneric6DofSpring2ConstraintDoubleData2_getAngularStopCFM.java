public btVector3DoubleData getAngularStopCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_angularStopCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
