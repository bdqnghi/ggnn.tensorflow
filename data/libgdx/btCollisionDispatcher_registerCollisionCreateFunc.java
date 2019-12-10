public void registerCollisionCreateFunc(int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc createFunc) {
    CollisionJNI.btCollisionDispatcher_registerCollisionCreateFunc(swigCPtr, this, proxyType0, proxyType1, btCollisionAlgorithmCreateFunc.getCPtr(createFunc), createFunc);
}
