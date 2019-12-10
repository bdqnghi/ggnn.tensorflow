public void enableMotor(int index, boolean onOff) {
    DynamicsJNI.btGeneric6DofSpring2Constraint_enableMotor(swigCPtr, this, index, onOff);
}
