public void getBroadphaseAabb(Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btBroadphaseInterface_getBroadphaseAabb(swigCPtr, this, aabbMin, aabbMax);
}
