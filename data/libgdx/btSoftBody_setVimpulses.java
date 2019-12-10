public void setVimpulses(btVector3 value) {
    SoftbodyJNI.btSoftBody_Cluster_vimpulses_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
