protected void refMotionState(btMotionState motionState) {
    if (this.motionState == motionState)
        return;
    if (this.motionState != null)
        this.motionState.release();
    this.motionState = motionState;
    if (this.motionState != null)
        this.motionState.obtain();
}
