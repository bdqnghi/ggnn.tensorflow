public void drawTriangle(Vector3 v0, Vector3 v1, Vector3 v2, Vector3 color, float arg4) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawTriangle__SWIG_1(swigCPtr, this, v0, v1, v2, color, arg4);
    else
        LinearMathJNI.btIDebugDraw_drawTriangleSwigExplicitbtIDebugDraw__SWIG_1(swigCPtr, this, v0, v1, v2, color, arg4);
}
