public void setDamping(float lin_damping, float ang_damping) {
    DynamicsJNI.btRigidBody_setDamping(swigCPtr, this, lin_damping, ang_damping);
}
