public void getNonvirtualAabb(Matrix4 trans, Vector3 aabbMin, Vector3 aabbMax, float margin) {
    CollisionJNI.btPolyhedralConvexAabbCachingShape_getNonvirtualAabb(swigCPtr, this, trans, aabbMin, aabbMax, margin);
}
