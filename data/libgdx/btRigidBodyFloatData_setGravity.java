public void setGravity(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_gravity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
