public void setVertices(btVector3Array value) {
    LinearMathJNI.ConvexH_vertices_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
