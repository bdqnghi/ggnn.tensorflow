public void setOutputVertices(btVector3Array value) {
    LinearMathJNI.HullResult_OutputVertices_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
