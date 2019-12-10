public void setTotalTorque(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_totalTorque_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
