public btCollisionAlgorithm CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo arg0, btCollisionObjectWrapper body0Wrap, btCollisionObjectWrapper body1Wrap) {
    long cPtr = CollisionJNI.btCollisionAlgorithmCreateFunc_CreateCollisionAlgorithm(swigCPtr, this, btCollisionAlgorithmConstructionInfo.getCPtr(arg0), arg0, btCollisionObjectWrapper.getCPtr(body0Wrap), body0Wrap, btCollisionObjectWrapper.getCPtr(body1Wrap), body1Wrap);
    return (cPtr == 0) ? null : new btCollisionAlgorithm(cPtr, false);
}
