public float addSingleResult(LocalRayResult rayResult, boolean normalInWorldSpace) {
    return (getClass() == ClosestRayResultCallback.class) ? CollisionJNI.ClosestRayResultCallback_addSingleResult(swigCPtr, this, LocalRayResult.getCPtr(rayResult), rayResult, normalInWorldSpace) : CollisionJNI.ClosestRayResultCallback_addSingleResultSwigExplicitClosestRayResultCallback(swigCPtr, this, LocalRayResult.getCPtr(rayResult), rayResult, normalInWorldSpace);
}
