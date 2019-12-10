public void drawCylinder(float radius, float halfHeight, int upAxis, Matrix4 transform, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawCylinder(swigCPtr, this, radius, halfHeight, upAxis, transform, color);
    else
        LinearMathJNI.btIDebugDraw_drawCylinderSwigExplicitbtIDebugDraw(swigCPtr, this, radius, halfHeight, upAxis, transform, color);
}
