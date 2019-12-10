public void integrateVelocities(float step) {
    DynamicsJNI.btRigidBody_integrateVelocities(swigCPtr, this, step);
}
