public btSoftBody.Material appendMaterial() {
    long cPtr = SoftbodyJNI.btSoftBody_appendMaterial(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Material(cPtr, false);
}
