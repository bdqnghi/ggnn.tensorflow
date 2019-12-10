public void setWorldTransform(Matrix4 worldTrans) {
    CollisionJNI.btCollisionObject_setWorldTransform(swigCPtr, this, worldTrans);
}
