public void drawCone(float radius, float height, int upAxis, Matrix4 transform, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawCone(swigCPtr, this, radius, height, upAxis, transform, color);
    else
        LinearMathJNI.btIDebugDraw_drawConeSwigExplicitbtIDebugDraw(swigCPtr, this, radius, height, upAxis, transform, color);
}
