public void setLv(btVector3 value) {
    SoftbodyJNI.btSoftBody_Cluster_lv_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
