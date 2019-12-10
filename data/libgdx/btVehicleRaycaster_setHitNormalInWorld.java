public void setHitNormalInWorld(btVector3 value) {
    DynamicsJNI.btVehicleRaycaster_btVehicleRaycasterResult_hitNormalInWorld_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
