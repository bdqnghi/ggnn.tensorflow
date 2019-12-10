public void setLinearFactor(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_linearFactor_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
