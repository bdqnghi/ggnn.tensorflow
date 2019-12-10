public void getAabb(Matrix4 t, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btCollisionShape_getAabb(swigCPtr, this, t, aabbMin, aabbMax);
}
