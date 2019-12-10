public int get_limit_motor_info2(btRotationalLimitMotor limot, Matrix4 transA, Matrix4 transB, Vector3 linVelA, Vector3 linVelB, Vector3 angVelA, Vector3 angVelB, btTypedConstraint.btConstraintInfo2 info, int row, Vector3 ax1, int rotational) {
    return DynamicsJNI.btGeneric6DofConstraint_get_limit_motor_info2__SWIG_1(swigCPtr, this, btRotationalLimitMotor.getCPtr(limot), limot, transA, transB, linVelA, linVelB, angVelA, angVelB, btTypedConstraint.btConstraintInfo2.getCPtr(info), info, row, ax1, rotational);
}
