public btConstraintSolver getConstraintSolver() {
    long cPtr = DynamicsJNI.btDynamicsWorld_getConstraintSolver(swigCPtr, this);
    return (cPtr == 0) ? null : new btConstraintSolver(cPtr, false);
}
