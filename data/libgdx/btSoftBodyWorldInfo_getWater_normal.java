public btVector3 getWater_normal() {
    long cPtr = SoftbodyJNI.btSoftBodyWorldInfo_water_normal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
