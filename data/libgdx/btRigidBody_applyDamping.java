public void applyDamping(float timeStep) {
    DynamicsJNI.btRigidBody_applyDamping(swigCPtr, this, timeStep);
}
