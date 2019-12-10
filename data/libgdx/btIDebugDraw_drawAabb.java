public void drawAabb(Vector3 from, Vector3 to, Vector3 color) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawAabb(swigCPtr, this, from, to, color);
    else
        LinearMathJNI.btIDebugDraw_drawAabbSwigExplicitbtIDebugDraw(swigCPtr, this, from, to, color);
}
