public void setTimeStepAndCounters(float collisionMarginTriangle, btCollisionObjectWrapper triObjWrap, btDispatcherInfo dispatchInfo, btManifoldResult resultOut) {
    SoftbodyJNI.btSoftBodyTriangleCallback_setTimeStepAndCounters(swigCPtr, this, collisionMarginTriangle, btCollisionObjectWrapper.getCPtr(triObjWrap), triObjWrap, btDispatcherInfo.getCPtr(dispatchInfo), dispatchInfo, btManifoldResult.getCPtr(resultOut), resultOut);
}
