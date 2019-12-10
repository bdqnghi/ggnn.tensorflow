public void partialRefitTree(Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btBvhTriangleMeshShape_partialRefitTree(swigCPtr, this, aabbMin, aabbMax);
}
