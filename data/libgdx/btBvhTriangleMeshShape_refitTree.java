public void refitTree(Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btBvhTriangleMeshShape_refitTree(swigCPtr, this, aabbMin, aabbMax);
}
