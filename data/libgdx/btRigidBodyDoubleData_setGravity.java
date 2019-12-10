public void setGravity(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_gravity_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
