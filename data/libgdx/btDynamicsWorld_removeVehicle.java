public void removeVehicle(btActionInterface vehicle) {
    DynamicsJNI.btDynamicsWorld_removeVehicle(swigCPtr, this, btActionInterface.getCPtr(vehicle), vehicle);
}
