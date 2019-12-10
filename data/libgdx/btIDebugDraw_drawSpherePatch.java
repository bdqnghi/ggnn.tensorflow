public void drawSpherePatch(Vector3 center, Vector3 up, Vector3 axis, float radius, float minTh, float maxTh, float minPs, float maxPs, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawSpherePatch__SWIG_2(swigCPtr, this, center, up, axis, radius, minTh, maxTh, minPs, maxPs, color);
    else
        LinearMathJNI.btIDebugDraw_drawSpherePatchSwigExplicitbtIDebugDraw__SWIG_2(swigCPtr, this, center, up, axis, radius, minTh, maxTh, minPs, maxPs, color);
}
