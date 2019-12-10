public btVector3 getCom() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_com_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
