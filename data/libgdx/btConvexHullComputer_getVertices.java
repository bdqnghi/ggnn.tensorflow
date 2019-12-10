public btVector3Array getVertices() {
    long cPtr = LinearMathJNI.btConvexHullComputer_vertices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
