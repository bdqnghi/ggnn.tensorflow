public Vector3 GetPointForAngle(float fAngleInRadians, float fLength) {
    return DynamicsJNI.btConeTwistConstraint_GetPointForAngle(swigCPtr, this, fAngleInRadians, fLength);
}
