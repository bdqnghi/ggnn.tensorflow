public void setWorldInfo(btSoftBodyWorldInfo value) {
    SoftbodyJNI.btSoftBody_worldInfo_set(swigCPtr, this, btSoftBodyWorldInfo.getCPtr(value), value);
}
