public btVector3 getAnchor() {
    long cPtr = LinearMathJNI.btAngleCompareFunc_anchor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
