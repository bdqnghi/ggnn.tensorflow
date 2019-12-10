public void setLinearFactor(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_linearFactor_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
