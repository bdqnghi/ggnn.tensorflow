public void setDrift(btVector3 value) {
    SoftbodyJNI.btSoftBody_Joint_drift_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
