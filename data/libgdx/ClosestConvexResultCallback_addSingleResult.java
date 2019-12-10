public float addSingleResult(LocalConvexResult convexResult, boolean normalInWorldSpace) {
    return (getClass() == ClosestConvexResultCallback.class) ? CollisionJNI.ClosestConvexResultCallback_addSingleResult(swigCPtr, this, LocalConvexResult.getCPtr(convexResult), convexResult, normalInWorldSpace) : CollisionJNI.ClosestConvexResultCallback_addSingleResultSwigExplicitClosestConvexResultCallback(swigCPtr, this, LocalConvexResult.getCPtr(convexResult), convexResult, normalInWorldSpace);
}
