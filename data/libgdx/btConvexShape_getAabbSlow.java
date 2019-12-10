public void getAabbSlow(Matrix4 t, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btConvexShape_getAabbSlow(swigCPtr, this, t, aabbMin, aabbMax);
}
