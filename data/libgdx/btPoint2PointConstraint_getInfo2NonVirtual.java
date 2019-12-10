public void getInfo2NonVirtual(btTypedConstraint.btConstraintInfo2 info, Matrix4 body0_trans, Matrix4 body1_trans) {
    DynamicsJNI.btPoint2PointConstraint_getInfo2NonVirtual(swigCPtr, this, btTypedConstraint.btConstraintInfo2.getCPtr(info), info, body0_trans, body1_trans);
}
