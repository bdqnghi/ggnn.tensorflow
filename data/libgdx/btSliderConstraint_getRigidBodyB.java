public btRigidBody getRigidBodyB() {
    return btRigidBody.getInstance(DynamicsJNI.btSliderConstraint_getRigidBodyB(swigCPtr, this), false);
}
