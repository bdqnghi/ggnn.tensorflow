public void applyCentralForce(Vector3 force) {
    DynamicsJNI.btRigidBody_applyCentralForce(swigCPtr, this, force);
}
