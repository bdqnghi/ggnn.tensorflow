public void setCollisionObjects(btCollisionObjectConstArray value) {
    CollisionJNI.AllHitsRayResultCallback_collisionObjects_set(swigCPtr, this, btCollisionObjectConstArray.getCPtr(value), value);
}
