public Vector3 computeGyroscopicForceExplicit(float maxGyroscopicForce) {
    return DynamicsJNI.btRigidBody_computeGyroscopicForceExplicit(swigCPtr, this, maxGyroscopicForce);
}
