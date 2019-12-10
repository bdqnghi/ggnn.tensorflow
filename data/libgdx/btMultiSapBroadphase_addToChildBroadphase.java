public void addToChildBroadphase(btMultiSapBroadphase.btMultiSapProxy parentMultiSapProxy, btBroadphaseProxy childProxy, btBroadphaseInterface childBroadphase) {
    CollisionJNI.btMultiSapBroadphase_addToChildBroadphase(swigCPtr, this, btMultiSapBroadphase.btMultiSapProxy.getCPtr(parentMultiSapProxy), parentMultiSapProxy, btBroadphaseProxy.getCPtr(childProxy), childProxy, btBroadphaseInterface.getCPtr(childBroadphase), childBroadphase);
}
