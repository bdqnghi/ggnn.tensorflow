public void getAabb(Vector3 aabbMin, Vector3 aabbMax) {
    SoftbodyJNI.btSoftBody_getAabb(swigCPtr, this, aabbMin, aabbMax);
}
