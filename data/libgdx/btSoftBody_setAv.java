public void setAv(btVector3 value) {
    SoftbodyJNI.btSoftBody_Cluster_av_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
