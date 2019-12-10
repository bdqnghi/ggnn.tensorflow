public void setCollisionObject(btCollisionObject value) {
    CollisionJNI.btCollisionObjectWrapper_collisionObject_set(swigCPtr, this, btCollisionObject.getCPtr(value), value);
}
