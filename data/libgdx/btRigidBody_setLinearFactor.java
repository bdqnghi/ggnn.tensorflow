public void setLinearFactor(Vector3 linearFactor) {
    DynamicsJNI.btRigidBody_setLinearFactor(swigCPtr, this, linearFactor);
}
