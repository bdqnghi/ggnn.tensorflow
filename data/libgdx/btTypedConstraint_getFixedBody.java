public static btRigidBody getFixedBody() {
    return btRigidBody.getInstance(DynamicsJNI.btTypedConstraint_getFixedBody(), false);
}
