public btSoftBodyWorldInfo getWorldInfo() {
    long cPtr = SoftbodyJNI.btSoftBody_worldInfo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBodyWorldInfo(cPtr, false);
}
