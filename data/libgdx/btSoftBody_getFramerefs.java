public btVector3Array getFramerefs() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_framerefs_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
