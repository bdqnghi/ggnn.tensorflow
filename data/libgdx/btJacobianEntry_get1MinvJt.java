public btVector3 get1MinvJt() {
    long cPtr = DynamicsJNI.btJacobianEntry_1MinvJt_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
