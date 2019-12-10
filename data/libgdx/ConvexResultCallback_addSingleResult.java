public float addSingleResult(LocalConvexResult convexResult, boolean normalInWorldSpace) {
    return CollisionJNI.ConvexResultCallback_addSingleResult(swigCPtr, this, LocalConvexResult.getCPtr(convexResult), convexResult, normalInWorldSpace);
}
