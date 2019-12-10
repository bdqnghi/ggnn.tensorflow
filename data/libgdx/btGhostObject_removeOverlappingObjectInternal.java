public void removeOverlappingObjectInternal(btBroadphaseProxy otherProxy, btDispatcher dispatcher) {
    CollisionJNI.btGhostObject_removeOverlappingObjectInternal__SWIG_1(swigCPtr, this, btBroadphaseProxy.getCPtr(otherProxy), otherProxy, btDispatcher.getCPtr(dispatcher), dispatcher);
}
