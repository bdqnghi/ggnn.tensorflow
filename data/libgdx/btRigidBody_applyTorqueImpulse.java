public void applyTorqueImpulse(Vector3 torque) {
    DynamicsJNI.btRigidBody_applyTorqueImpulse(swigCPtr, this, torque);
}
