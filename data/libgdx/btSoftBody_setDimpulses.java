public void setDimpulses(btVector3 value) {
    SoftbodyJNI.btSoftBody_Cluster_dimpulses_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
