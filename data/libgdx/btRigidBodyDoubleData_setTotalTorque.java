public void setTotalTorque(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_totalTorque_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
