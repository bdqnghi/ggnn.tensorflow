public void setRefs(btVector3 value) {
    SoftbodyJNI.btSoftBody_Joint_refs_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
