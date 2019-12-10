private void internalSetCollisionShape(btCollisionShape collisionShape) {
    CollisionJNI.btCollisionObject_internalSetCollisionShape(swigCPtr, this, btCollisionShape.getCPtr(collisionShape), collisionShape);
}
