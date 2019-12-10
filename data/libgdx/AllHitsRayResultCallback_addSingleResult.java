public float addSingleResult(LocalRayResult rayResult, boolean normalInWorldSpace) {
    return (getClass() == AllHitsRayResultCallback.class) ? CollisionJNI.AllHitsRayResultCallback_addSingleResult(swigCPtr, this, LocalRayResult.getCPtr(rayResult), rayResult, normalInWorldSpace) : CollisionJNI.AllHitsRayResultCallback_addSingleResultSwigExplicitAllHitsRayResultCallback(swigCPtr, this, LocalRayResult.getCPtr(rayResult), rayResult, normalInWorldSpace);
}
