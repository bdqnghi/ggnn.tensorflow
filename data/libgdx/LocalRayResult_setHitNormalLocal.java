public void setHitNormalLocal(btVector3 value) {
    CollisionJNI.LocalRayResult_hitNormalLocal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
