public void setAabb(btVector3 value) {
    LinearMathJNI.btIDebugDraw_DefaultColors_aabb_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
