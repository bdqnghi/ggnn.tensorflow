public void setVertices(btVector3Array value) {
    CollisionJNI.btConvexPolyhedron_vertices_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
