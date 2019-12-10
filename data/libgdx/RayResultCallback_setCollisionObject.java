public void setCollisionObject(btCollisionObject value) {
    CollisionJNI.RayResultCallback_collisionObject_set(swigCPtr, this, btCollisionObject.getCPtr(value), value);
}
