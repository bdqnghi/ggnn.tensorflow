public void drawPlane(Vector3 planeNormal, float planeConst, Matrix4 transform, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawPlane(swigCPtr, this, planeNormal, planeConst, transform, color);
    else
        LinearMathJNI.btIDebugDraw_drawPlaneSwigExplicitbtIDebugDraw(swigCPtr, this, planeNormal, planeConst, transform, color);
}
