public btDispatcher getDispatcher() {
    long cPtr = SoftbodyJNI.btSoftBodyWorldInfo_dispatcher_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDispatcher(cPtr, false);
}
