public btVector3 getAngularFactor() {
    long cPtr = DynamicsJNI.btSolverBody_angularFactor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
