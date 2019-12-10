public btBroadphaseInterface getBroadphase() {
    long cPtr = CollisionJNI.btCollisionWorld_getBroadphase__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btBroadphaseInterface(cPtr, false);
}
