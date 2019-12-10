public void getInfo2NonVirtual(btTypedConstraint.btConstraintInfo2 info, Matrix4 transA, Matrix4 transB, Vector3 linVelA, Vector3 linVelB, Vector3 angVelA, Vector3 angVelB) {
    DynamicsJNI.btGeneric6DofConstraint_getInfo2NonVirtual(swigCPtr, this, btTypedConstraint.btConstraintInfo2.getCPtr(info), info, transA, transB, linVelA, linVelB, angVelA, angVelB);
}
