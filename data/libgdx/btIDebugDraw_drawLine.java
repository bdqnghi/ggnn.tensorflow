public void drawLine(Vector3 from, Vector3 to, Vector3 fromColor, Vector3 toColor) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawLine__SWIG_1(swigCPtr, this, from, to, fromColor, toColor);
    else
        LinearMathJNI.btIDebugDraw_drawLineSwigExplicitbtIDebugDraw__SWIG_1(swigCPtr, this, from, to, fromColor, toColor);
}
