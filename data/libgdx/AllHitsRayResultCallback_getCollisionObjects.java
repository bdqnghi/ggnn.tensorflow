public btCollisionObjectConstArray getCollisionObjects() {
    long cPtr = CollisionJNI.AllHitsRayResultCallback_collisionObjects_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionObjectConstArray(cPtr, false);
}
