public void setGravity(Vector3 acceleration) {
    DynamicsJNI.btRigidBody_setGravity(swigCPtr, this, acceleration);
}
