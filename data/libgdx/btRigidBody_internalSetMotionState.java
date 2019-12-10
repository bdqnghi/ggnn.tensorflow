private void internalSetMotionState(btMotionState motionState) {
    DynamicsJNI.btRigidBody_internalSetMotionState(swigCPtr, this, btMotionState.getCPtr(motionState), motionState);
}
