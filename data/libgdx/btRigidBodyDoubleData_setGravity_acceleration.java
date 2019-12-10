public void setGravity_acceleration(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_gravity_acceleration_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
