public btSoftBody.Face getFace(int idx) {
    long cPtr = SoftbodyJNI.btSoftBody_getFace(swigCPtr, this, idx);
    return (cPtr == 0) ? null : new btSoftBody.Face(cPtr, false);
}
