public btScalarArray getHitFractions() {
    long cPtr = CollisionJNI.AllHitsRayResultCallback_hitFractions_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btScalarArray(cPtr, false);
}
