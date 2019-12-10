public btCollisionAlgorithmCreateFunc getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1) {
    long cPtr = CollisionJNI.btCollisionConfiguration_getCollisionAlgorithmCreateFunc(swigCPtr, this, proxyType0, proxyType1);
    return (cPtr == 0) ? null : new btCollisionAlgorithmCreateFunc(cPtr, false);
}
