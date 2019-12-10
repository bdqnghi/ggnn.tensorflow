public btTransform getWorldTransform() {
    long cPtr = DynamicsJNI.btSolverBody_worldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
