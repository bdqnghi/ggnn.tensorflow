public void get_edge_plane(int edge_index, btVector4 plane) {
    CollisionJNI.btPrimitiveTriangle_get_edge_plane(swigCPtr, this, edge_index, btVector4.getCPtr(plane), plane);
}
