public void addTriangleIndices(int index1, int index2, int index3) {
    CollisionJNI.btTriangleMesh_addTriangleIndices(swigCPtr, this, index1, index2, index3);
}
