public btVector3 getBJ() {
    long cPtr = DynamicsJNI.btJacobianEntry_bJ_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
