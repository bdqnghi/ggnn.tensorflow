public void getInfo2NonVirtual(btTypedConstraint.btConstraintInfo2 info, Matrix4 transA, Matrix4 transB, Matrix3 invInertiaWorldA, Matrix3 invInertiaWorldB) {
    DynamicsJNI.btConeTwistConstraint_getInfo2NonVirtual(swigCPtr, this, btTypedConstraint.btConstraintInfo2.getCPtr(info), info, transA, transB, invInertiaWorldA, invInertiaWorldB);
}
