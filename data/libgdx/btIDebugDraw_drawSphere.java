public void drawSphere(Vector3 p, float radius, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawSphere__SWIG_1(swigCPtr, this, p, radius, color);
    else
        LinearMathJNI.btIDebugDraw_drawSphereSwigExplicitbtIDebugDraw__SWIG_1(swigCPtr, this, p, radius, color);
}
