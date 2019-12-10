public btScalarArray getWgh() {
    long cPtr = SoftbodyJNI.btSoftBody_Pose_wgh_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btScalarArray(cPtr, false);
}
