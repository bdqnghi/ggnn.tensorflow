public float getContactBreakingThreshold(float defaultContactThresholdFactor) {
    return CollisionJNI.btCollisionShape_getContactBreakingThreshold(swigCPtr, this, defaultContactThresholdFactor);
}
