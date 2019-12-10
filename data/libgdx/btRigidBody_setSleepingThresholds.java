public void setSleepingThresholds(float linear, float angular) {
    DynamicsJNI.btRigidBody_setSleepingThresholds(swigCPtr, this, linear, angular);
}
