public btVector3 getRefs() {
    long cPtr = SoftbodyJNI.btSoftBody_Joint_refs_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
