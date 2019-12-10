public void setFramerefs(btVector3Array value) {
    SoftbodyJNI.btSoftBody_Cluster_framerefs_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
