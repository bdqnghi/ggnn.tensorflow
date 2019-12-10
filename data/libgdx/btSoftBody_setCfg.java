public void setCfg(btSoftBody.Config value) {
    SoftbodyJNI.btSoftBody_cfg_set(swigCPtr, this, btSoftBody.Config.getCPtr(value), value);
}
