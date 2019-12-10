public void initSeparatingDistance(Vector3 separatingVector, float separatingDistance, Matrix4 transA, Matrix4 transB) {
    LinearMathJNI.btConvexSeparatingDistanceUtil_initSeparatingDistance(swigCPtr, this, separatingVector, separatingDistance, transA, transB);
}
