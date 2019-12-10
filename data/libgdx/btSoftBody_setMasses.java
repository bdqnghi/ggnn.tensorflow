public void setMasses(btScalarArray value) {
    SoftbodyJNI.btSoftBody_Cluster_masses_set(swigCPtr, this, btScalarArray.getCPtr(value), value);
}
