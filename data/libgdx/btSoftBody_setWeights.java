public void setWeights(btVector3 value) {
    SoftbodyJNI.btSoftBody_SContact_weights_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
