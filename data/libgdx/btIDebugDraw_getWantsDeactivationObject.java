public btVector3 getWantsDeactivationObject() {
    long cPtr = LinearMathJNI.btIDebugDraw_DefaultColors_wantsDeactivationObject_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
