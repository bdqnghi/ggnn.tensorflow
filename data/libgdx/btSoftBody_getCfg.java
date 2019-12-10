public btSoftBody.Config getCfg() {
    long cPtr = SoftbodyJNI.btSoftBody_cfg_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Config(cPtr, false);
}
