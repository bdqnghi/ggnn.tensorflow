public void getInfo2Internal(btTypedConstraint.btConstraintInfo2 info, Matrix4 transA, Matrix4 transB, Vector3 angVelA, Vector3 angVelB) {
    DynamicsJNI.btHingeConstraint_getInfo2Internal(swigCPtr, this, btTypedConstraint.btConstraintInfo2.getCPtr(info), info, transA, transB, angVelA, angVelB);
}
