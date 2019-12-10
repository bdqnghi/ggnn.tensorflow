public btVector3 getOffset() {
    long cPtr = SoftbodyJNI.btSoftBody_Note_offset_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
