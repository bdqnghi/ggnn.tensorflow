public void setAngularVelocity(Vector3 ang_vel) {
    DynamicsJNI.btRigidBody_setAngularVelocity(swigCPtr, this, ang_vel);
}
