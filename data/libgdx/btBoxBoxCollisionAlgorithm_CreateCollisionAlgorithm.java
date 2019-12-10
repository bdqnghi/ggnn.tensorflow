public btCollisionAlgorithm CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo ci, btCollisionObjectWrapper body0Wrap, btCollisionObjectWrapper body1Wrap) {
    long cPtr = CollisionJNI.btBoxBoxCollisionAlgorithm_CreateFunc_CreateCollisionAlgorithm(swigCPtr, this, btCollisionAlgorithmConstructionInfo.getCPtr(ci), ci, btCollisionObjectWrapper.getCPtr(body0Wrap), body0Wrap, btCollisionObjectWrapper.getCPtr(body1Wrap), body1Wrap);
    return (cPtr == 0) ? null : new btCollisionAlgorithm(cPtr, false);
}
