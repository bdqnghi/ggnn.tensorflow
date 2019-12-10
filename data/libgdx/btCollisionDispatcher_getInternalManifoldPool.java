public btPoolAllocator getInternalManifoldPool() {
    long cPtr = CollisionJNI.btCollisionDispatcher_getInternalManifoldPool__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btPoolAllocator(cPtr, false);
}
