public void setVertices(btVector3Array value) {
    LinearMathJNI.btConvexHullComputer_vertices_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
