public btRigidBody getRigidBody() {
    return btRigidBody.getInstance(SoftbodyJNI.btSoftColliders_CollideSDF_RS_rigidBody_get(swigCPtr, this), false);
}
