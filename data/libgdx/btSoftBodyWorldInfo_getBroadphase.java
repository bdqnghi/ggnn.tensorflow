public btBroadphaseInterface getBroadphase() {
    long cPtr = SoftbodyJNI.btSoftBodyWorldInfo_broadphase_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btBroadphaseInterface(cPtr, false);
}
