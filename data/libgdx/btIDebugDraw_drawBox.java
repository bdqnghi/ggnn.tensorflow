public void drawBox(Vector3 bbMin, Vector3 bbMax, Matrix4 trans, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawBox__SWIG_1(swigCPtr, this, bbMin, bbMax, trans, color);
    else
        LinearMathJNI.btIDebugDraw_drawBoxSwigExplicitbtIDebugDraw__SWIG_1(swigCPtr, this, bbMin, bbMax, trans, color);
}
