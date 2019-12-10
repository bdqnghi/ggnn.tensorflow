public SoftBodyConfigData getConfig() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_config_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyConfigData(cPtr, false);
}
