public btTransform getFramexform() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_framexform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
