public btDispatcher getDispatcher() {
    long cPtr = CollisionJNI.btCollisionWorld_getDispatcher__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btDispatcher(cPtr, false);
}
