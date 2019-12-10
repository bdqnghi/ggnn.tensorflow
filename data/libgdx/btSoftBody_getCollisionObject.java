public btCollisionObject getCollisionObject() {
    return btCollisionObject.getInstance(SoftbodyJNI.btSoftBody_Body_collisionObject_get(swigCPtr, this), false);
}
