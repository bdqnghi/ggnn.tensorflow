public void applyForce(Vector3 force, Vector3 rel_pos) {
    DynamicsJNI.btRigidBody_applyForce(swigCPtr, this, force, rel_pos);
}
