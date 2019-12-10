public void setLinearVelocity(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_linearVelocity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
