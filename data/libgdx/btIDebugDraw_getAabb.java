public btVector3 getAabb() {
    long cPtr = LinearMathJNI.btIDebugDraw_DefaultColors_aabb_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
