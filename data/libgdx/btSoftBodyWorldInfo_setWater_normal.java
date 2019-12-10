public void setWater_normal(btVector3 value) {
    SoftbodyJNI.btSoftBodyWorldInfo_water_normal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
