public void setAngularFactor(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_angularFactor_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
