public void setSetting(btConstraintSetting value) {
    DynamicsJNI.btPoint2PointConstraint_setting_set(swigCPtr, this, btConstraintSetting.getCPtr(value), value);
}
