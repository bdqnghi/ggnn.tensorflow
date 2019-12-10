public btScalarArray getMasses() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_masses_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btScalarArray(cPtr, false);
}
