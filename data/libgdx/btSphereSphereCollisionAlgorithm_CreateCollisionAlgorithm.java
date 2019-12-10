public btCollisionAlgorithm CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo ci, btCollisionObjectWrapper col0Wrap, btCollisionObjectWrapper col1Wrap) {
    long cPtr = CollisionJNI.btSphereSphereCollisionAlgorithm_CreateFunc_CreateCollisionAlgorithm(swigCPtr, this, btCollisionAlgorithmConstructionInfo.getCPtr(ci), ci, btCollisionObjectWrapper.getCPtr(col0Wrap), col0Wrap, btCollisionObjectWrapper.getCPtr(col1Wrap), col1Wrap);
    return (cPtr == 0) ? null : new btCollisionAlgorithm(cPtr, false);
}
