public btVector3 getAJ() {
    long cPtr = DynamicsJNI.btJacobianEntry_aJ_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
