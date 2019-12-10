public btConvexHullComputer.Edge getNextEdgeOfVertex() {
    long cPtr = LinearMathJNI.btConvexHullComputer_Edge_getNextEdgeOfVertex(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexHullComputer.Edge(cPtr, false);
}
