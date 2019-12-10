public btRigidBody getRigidBodyA() {
    return btRigidBody.getInstance(DynamicsJNI.btSliderConstraint_getRigidBodyA(swigCPtr, this), false);
}
