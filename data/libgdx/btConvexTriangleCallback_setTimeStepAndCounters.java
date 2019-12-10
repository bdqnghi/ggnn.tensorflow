public void setTimeStepAndCounters(float collisionMarginTriangle, btDispatcherInfo dispatchInfo, btCollisionObjectWrapper convexBodyWrap, btCollisionObjectWrapper triBodyWrap, btManifoldResult resultOut) {
    CollisionJNI.btConvexTriangleCallback_setTimeStepAndCounters(swigCPtr, this, collisionMarginTriangle, btDispatcherInfo.getCPtr(dispatchInfo), dispatchInfo, btCollisionObjectWrapper.getCPtr(convexBodyWrap), convexBodyWrap, btCollisionObjectWrapper.getCPtr(triBodyWrap), triBodyWrap, btManifoldResult.getCPtr(resultOut), resultOut);
}
