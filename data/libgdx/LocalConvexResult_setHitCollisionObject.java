public void setHitCollisionObject(btCollisionObject value) {
    CollisionJNI.LocalConvexResult_hitCollisionObject_set(swigCPtr, this, btCollisionObject.getCPtr(value), value);
}
