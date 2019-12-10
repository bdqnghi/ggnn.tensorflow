public void drawContactPoint(Vector3 PointOnB, Vector3 normalOnB, float distance, int lifeTime, Vector3 color) {
    LinearMathJNI.btIDebugDraw_drawContactPoint(swigCPtr, this, PointOnB, normalOnB, distance, lifeTime, color);
}
