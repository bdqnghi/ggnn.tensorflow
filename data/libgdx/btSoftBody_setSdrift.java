public void setSdrift(btVector3 value) {
    SoftbodyJNI.btSoftBody_Joint_sdrift_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
