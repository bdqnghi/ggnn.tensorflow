public void drawTransform(Matrix4 transform, float orthoLen) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawTransform(swigCPtr, this, transform, orthoLen);
    else
        LinearMathJNI.btIDebugDraw_drawTransformSwigExplicitbtIDebugDraw(swigCPtr, this, transform, orthoLen);
}
