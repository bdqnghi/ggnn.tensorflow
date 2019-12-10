public btVector3DoubleData getVertices3d() {
    long cPtr = CollisionJNI.btMeshPartData_vertices3d_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
