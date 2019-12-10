public btVector3 getDeactivatedObject() {
    long cPtr = LinearMathJNI.btIDebugDraw_DefaultColors_deactivatedObject_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
