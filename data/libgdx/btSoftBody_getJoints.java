public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Joint_p_t getJoints() {
    long cPtr = SoftbodyJNI.btSoftBody_joints_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Joint_p_t(cPtr, false);
}
