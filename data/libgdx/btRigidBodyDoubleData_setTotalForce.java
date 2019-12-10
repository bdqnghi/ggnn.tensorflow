public void setTotalForce(btVector3DoubleData value) {
    DynamicsJNI.btRigidBodyDoubleData_totalForce_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
