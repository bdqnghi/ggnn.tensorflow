public Vector3 getVelocityInLocalPoint(Vector3 rel_pos) {
    return DynamicsJNI.btRigidBody_getVelocityInLocalPoint(swigCPtr, this, rel_pos);
}
