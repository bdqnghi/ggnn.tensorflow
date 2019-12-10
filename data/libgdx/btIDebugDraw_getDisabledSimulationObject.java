public btVector3 getDisabledSimulationObject() {
    long cPtr = LinearMathJNI.btIDebugDraw_DefaultColors_disabledSimulationObject_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
