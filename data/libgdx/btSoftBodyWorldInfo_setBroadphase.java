public void setBroadphase(btBroadphaseInterface value) {
    SoftbodyJNI.btSoftBodyWorldInfo_broadphase_set(swigCPtr, this, btBroadphaseInterface.getCPtr(value), value);
}
