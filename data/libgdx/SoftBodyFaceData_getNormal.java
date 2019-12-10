public btVector3FloatData getNormal() {
    long cPtr = SoftbodyJNI.SoftBodyFaceData_normal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
