public float addSingleResult(LocalRayResult rayResult, boolean normalInWorldSpace) {
    return CollisionJNI.RayResultCallback_addSingleResult(swigCPtr, this, LocalRayResult.getCPtr(rayResult), rayResult, normalInWorldSpace);
}
