public btRigidBody getRigid() {
    return btRigidBody.getInstance(SoftbodyJNI.btSoftBody_Body_rigid_get(swigCPtr, this), false);
}
