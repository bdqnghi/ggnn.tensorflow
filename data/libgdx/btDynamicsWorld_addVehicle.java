public void addVehicle(btActionInterface vehicle) {
    DynamicsJNI.btDynamicsWorld_addVehicle(swigCPtr, this, btActionInterface.getCPtr(vehicle), vehicle);
}
