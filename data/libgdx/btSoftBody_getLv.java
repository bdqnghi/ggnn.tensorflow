public btVector3 getLv() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_lv_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
