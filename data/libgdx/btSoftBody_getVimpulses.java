public btVector3 getVimpulses() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_vimpulses_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
