public boolean buildHull(float margin) {
    return CollisionJNI.btShapeHull_buildHull(swigCPtr, this, margin);
}
