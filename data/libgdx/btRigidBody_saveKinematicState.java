public void saveKinematicState(float step) {
    DynamicsJNI.btRigidBody_saveKinematicState(swigCPtr, this, step);
}
