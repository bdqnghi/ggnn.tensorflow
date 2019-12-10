public void setGravity_acceleration(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_gravity_acceleration_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
