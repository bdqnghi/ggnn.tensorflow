public btRigidBody getRigidBodyB() {
    return btRigidBody.getInstance(DynamicsJNI.btConeTwistConstraint_getRigidBodyB(swigCPtr, this), false);
}
