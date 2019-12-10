public void setAngularVelocity(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_angularVelocity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
