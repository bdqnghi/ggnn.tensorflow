public void setHitCollisionObject(btCollisionObject value) {
    CollisionJNI.ClosestConvexResultCallback_hitCollisionObject_set(swigCPtr, this, btCollisionObject.getCPtr(value), value);
}
