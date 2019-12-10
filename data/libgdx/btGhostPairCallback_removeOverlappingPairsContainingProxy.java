public void removeOverlappingPairsContainingProxy(btBroadphaseProxy arg0, btDispatcher arg1) {
    if (getClass() == btGhostPairCallback.class)
        CollisionJNI.btGhostPairCallback_removeOverlappingPairsContainingProxy(swigCPtr, this, btBroadphaseProxy.getCPtr(arg0), arg0, btDispatcher.getCPtr(arg1), arg1);
    else
        CollisionJNI.btGhostPairCallback_removeOverlappingPairsContainingProxySwigExplicitbtGhostPairCallback(swigCPtr, this, btBroadphaseProxy.getCPtr(arg0), arg0, btDispatcher.getCPtr(arg1), arg1);
}
