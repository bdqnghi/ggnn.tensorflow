public btVector3Array getPos() {
    long cPtr = SoftbodyJNI.btSoftBody_Pose_pos_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3Array(cPtr, false);
}
