public void setLinearVelocity(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_linearVelocity_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
