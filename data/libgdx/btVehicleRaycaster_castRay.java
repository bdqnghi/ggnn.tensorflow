public long castRay(Vector3 from, Vector3 to, btVehicleRaycaster.btVehicleRaycasterResult result) {
    return DynamicsJNI.btVehicleRaycaster_castRay(swigCPtr, this, from, to, btVehicleRaycaster.btVehicleRaycasterResult.getCPtr(result), result);
}
