public btConstraintSetting getSetting() {
    long cPtr = DynamicsJNI.btPoint2PointConstraint_setting_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btConstraintSetting(cPtr, false);
}
