public void setAngularVelocity(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_angularVelocity_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
