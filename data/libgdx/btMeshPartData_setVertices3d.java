public void setVertices3d(btVector3DoubleData value) {
    CollisionJNI.btMeshPartData_vertices3d_set(swigCPtr, this, btVector3DoubleData.getCPtr(value), value);
}
