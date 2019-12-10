public btVector3 getLinearFactor() {
    long cPtr = DynamicsJNI.btSolverBody_linearFactor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
