public btVector3 getAv() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_av_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
