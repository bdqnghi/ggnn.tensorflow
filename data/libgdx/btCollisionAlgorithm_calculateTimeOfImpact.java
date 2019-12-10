public float calculateTimeOfImpact(btCollisionObject body0, btCollisionObject body1, btDispatcherInfo dispatchInfo, btManifoldResult resultOut) {
    return CollisionJNI.btCollisionAlgorithm_calculateTimeOfImpact(swigCPtr, this, btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1, btDispatcherInfo.getCPtr(dispatchInfo), dispatchInfo, btManifoldResult.getCPtr(resultOut), resultOut);
}
