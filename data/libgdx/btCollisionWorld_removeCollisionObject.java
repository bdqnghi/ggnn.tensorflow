public void removeCollisionObject(btCollisionObject collisionObject) {
    CollisionJNI.btCollisionWorld_removeCollisionObject(swigCPtr, this, btCollisionObject.getCPtr(collisionObject), collisionObject);
}
