public void getChildAabb(int child_index, Matrix4 t, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btGImpactShapeInterface_getChildAabb(swigCPtr, this, child_index, t, aabbMin, aabbMax);
}
