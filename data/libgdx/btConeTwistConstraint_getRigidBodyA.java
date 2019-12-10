public btRigidBody getRigidBodyA() {
    return btRigidBody.getInstance(DynamicsJNI.btConeTwistConstraint_getRigidBodyA(swigCPtr, this), false);
}
