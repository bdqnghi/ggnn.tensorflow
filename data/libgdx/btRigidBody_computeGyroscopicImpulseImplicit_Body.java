public Vector3 computeGyroscopicImpulseImplicit_Body(float step) {
    return DynamicsJNI.btRigidBody_computeGyroscopicImpulseImplicit_Body(swigCPtr, this, step);
}
