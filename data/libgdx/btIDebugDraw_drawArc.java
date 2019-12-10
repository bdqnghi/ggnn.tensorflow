public void drawArc(Vector3 center, Vector3 normal, Vector3 axis, float radiusA, float radiusB, float minAngle, float maxAngle, Vector3 color, boolean drawSect) {
    if (getClass() == btIDebugDraw.class)
        LinearMathJNI.btIDebugDraw_drawArc__SWIG_1(swigCPtr, this, center, normal, axis, radiusA, radiusB, minAngle, maxAngle, color, drawSect);
    else
        LinearMathJNI.btIDebugDraw_drawArcSwigExplicitbtIDebugDraw__SWIG_1(swigCPtr, this, center, normal, axis, radiusA, radiusB, minAngle, maxAngle, color, drawSect);
}
