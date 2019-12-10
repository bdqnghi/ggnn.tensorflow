public void setHitNormalWorld(btVector3Array value) {
    CollisionJNI.AllHitsRayResultCallback_hitNormalWorld_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
