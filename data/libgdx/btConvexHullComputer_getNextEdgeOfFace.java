public btConvexHullComputer.Edge getNextEdgeOfFace() {
    long cPtr = LinearMathJNI.btConvexHullComputer_Edge_getNextEdgeOfFace(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexHullComputer.Edge(cPtr, false);
}
