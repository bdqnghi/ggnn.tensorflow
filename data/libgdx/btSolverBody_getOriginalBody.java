public btRigidBody getOriginalBody() {
    return btRigidBody.getInstance(DynamicsJNI.btSolverBody_originalBody_get(swigCPtr, this), false);
}
