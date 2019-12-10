public void setVertices(btVector3 value) {
    CollisionJNI.btPrimitiveTriangle_vertices_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
