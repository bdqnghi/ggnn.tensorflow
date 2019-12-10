public void setCom(btVector3 value) {
    SoftbodyJNI.btSoftBody_Cluster_com_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
