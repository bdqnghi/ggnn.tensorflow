private btMotionState getI_motionState() {
    long cPtr = DynamicsJNI.btRigidBody_btRigidBodyConstructionInfo_i_motionState_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btMotionState(cPtr, false);
}
