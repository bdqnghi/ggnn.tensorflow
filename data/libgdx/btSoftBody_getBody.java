public btRigidBody getBody() {
    return btRigidBody.getInstance(SoftbodyJNI.btSoftBody_Anchor_body_get(swigCPtr, this), false);
}
