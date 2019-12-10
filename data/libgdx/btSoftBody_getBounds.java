public btVector3 getBounds() {
    long cPtr = SoftbodyJNI.btSoftBody_bounds_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
