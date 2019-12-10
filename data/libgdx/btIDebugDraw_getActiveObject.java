public btVector3 getActiveObject() {
    long cPtr = LinearMathJNI.btIDebugDraw_DefaultColors_activeObject_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
