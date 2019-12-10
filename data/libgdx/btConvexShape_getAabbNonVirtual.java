public void getAabbNonVirtual(Matrix4 t, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btConvexShape_getAabbNonVirtual(swigCPtr, this, t, aabbMin, aabbMax);
}
