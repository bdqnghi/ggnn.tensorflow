public btVector3 getNormal() {
    long cPtr = LinearMathJNI.btPlane_normal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
