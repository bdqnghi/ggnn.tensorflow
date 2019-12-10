public void setDimpulses(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyClusterData_dimpulses_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
