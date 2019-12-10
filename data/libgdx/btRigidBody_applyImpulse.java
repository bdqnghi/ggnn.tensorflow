public void applyImpulse(Vector3 impulse, Vector3 rel_pos) {
    DynamicsJNI.btRigidBody_applyImpulse(swigCPtr, this, impulse, rel_pos);
}
