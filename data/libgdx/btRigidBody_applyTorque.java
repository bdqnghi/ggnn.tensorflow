public void applyTorque(Vector3 torque) {
    DynamicsJNI.btRigidBody_applyTorque(swigCPtr, this, torque);
}
