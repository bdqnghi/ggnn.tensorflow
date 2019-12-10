public btVector3 getHitNormalInWorld() {
    long cPtr = DynamicsJNI.btVehicleRaycaster_btVehicleRaycasterResult_hitNormalInWorld_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
