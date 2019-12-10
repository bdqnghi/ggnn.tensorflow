public btSoftBody.Cluster getSoft() {
    long cPtr = SoftbodyJNI.btSoftBody_Body_soft_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Cluster(cPtr, false);
}
