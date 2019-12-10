public void setHitPointWorld(btVector3Array value) {
    CollisionJNI.AllHitsRayResultCallback_hitPointWorld_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
