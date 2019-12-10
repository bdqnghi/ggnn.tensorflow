public void setAngularFactor(btVector3FloatData value) {
    DynamicsJNI.btRigidBodyFloatData_angularFactor_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
