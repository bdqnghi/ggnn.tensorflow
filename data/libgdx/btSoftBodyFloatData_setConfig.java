public void setConfig(SoftBodyConfigData value) {
    SoftbodyJNI.btSoftBodyFloatData_config_set(swigCPtr, this, SoftBodyConfigData.getCPtr(value), value);
}
