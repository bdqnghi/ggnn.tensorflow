public btVector3 getDisabledDeactivationObject() {
    long cPtr = LinearMathJNI.btIDebugDraw_DefaultColors_disabledDeactivationObject_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
