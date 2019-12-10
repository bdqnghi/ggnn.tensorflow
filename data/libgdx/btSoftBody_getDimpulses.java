public btVector3 getDimpulses() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_dimpulses_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
