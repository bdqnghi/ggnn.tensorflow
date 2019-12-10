public void setHitFractions(btScalarArray value) {
    CollisionJNI.AllHitsRayResultCallback_hitFractions_set(swigCPtr, this, btScalarArray.getCPtr(value), value);
}
