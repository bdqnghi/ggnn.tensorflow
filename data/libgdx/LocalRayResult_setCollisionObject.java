public void setCollisionObject(btCollisionObject value) {
    CollisionJNI.LocalRayResult_collisionObject_set(swigCPtr, this, btCollisionObject.getCPtr(value), value);
}
