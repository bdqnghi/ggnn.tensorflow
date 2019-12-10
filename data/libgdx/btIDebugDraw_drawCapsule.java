public void drawCapsule(float radius, float halfHeight, int upAxis, Matrix4 transform, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawCapsule(swigCPtr, this, radius, halfHeight, upAxis, transform, color);
    else
        LinearMathJNI.btIDebugDraw_drawCapsuleSwigExplicitbtIDebugDraw(swigCPtr, this, radius, halfHeight, upAxis, transform, color);
}
