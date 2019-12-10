public void setLinearVelocity(Vector3 lin_vel) {
    DynamicsJNI.btRigidBody_setLinearVelocity(swigCPtr, this, lin_vel);
}
