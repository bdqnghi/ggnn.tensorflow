public btConvexHullComputer.Edge getReverseEdge() {
    long cPtr = LinearMathJNI.btConvexHullComputer_Edge_getReverseEdge(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexHullComputer.Edge(cPtr, false);
}
