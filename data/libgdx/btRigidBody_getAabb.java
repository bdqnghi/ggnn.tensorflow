public void getAabb(Vector3 aabbMin, Vector3 aabbMax) {
    DynamicsJNI.btRigidBody_getAabb(swigCPtr, this, aabbMin, aabbMax);
}
