public Vector3 computeGyroscopicImpulseImplicit_World(float dt) {
    return DynamicsJNI.btRigidBody_computeGyroscopicImpulseImplicit_World(swigCPtr, this, dt);
}
