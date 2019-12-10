public void setTotalForce(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_totalForce_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
