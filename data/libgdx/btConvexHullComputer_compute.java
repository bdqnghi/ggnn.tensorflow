public float compute(java.nio.DoubleBuffer coords, int stride, int count, float shrink, float shrinkClamp) {
    assert coords.isDirect() : "Buffer must be allocated direct.";
    {
        return LinearMathJNI.btConvexHullComputer_compute__SWIG_1(swigCPtr, this, coords, stride, count, shrink, shrinkClamp);
    }
}
