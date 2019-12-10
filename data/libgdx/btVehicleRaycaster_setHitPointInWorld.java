public void setHitPointInWorld(btVector3 value) {
    DynamicsJNI.btVehicleRaycaster_btVehicleRaycasterResult_hitPointInWorld_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
