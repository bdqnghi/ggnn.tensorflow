public void setPos(btVector3Array value) {
    SoftbodyJNI.btSoftBody_Pose_pos_set(swigCPtr, this, btVector3Array.getCPtr(value), value);
}
