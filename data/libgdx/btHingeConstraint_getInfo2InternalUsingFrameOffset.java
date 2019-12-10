public void getInfo2InternalUsingFrameOffset(btTypedConstraint.btConstraintInfo2 info, Matrix4 transA, Matrix4 transB, Vector3 angVelA, Vector3 angVelB) {
    DynamicsJNI.btHingeConstraint_getInfo2InternalUsingFrameOffset(swigCPtr, this, btTypedConstraint.btConstraintInfo2.getCPtr(info), info, transA, transB, angVelA, angVelB);
}
