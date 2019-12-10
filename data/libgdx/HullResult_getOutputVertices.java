public btVector3Array getOutputVertices() {
    long cPtr = LinearMathJNI.HullResult_OutputVertices_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
