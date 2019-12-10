public btCollisionShape getPclient() {
    long cPtr = SoftbodyJNI.btSparseSdf3_Cell_pclient_get(swigCPtr, this);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
