public void calcAngleInfo2(Matrix4 transA, Matrix4 transB, Matrix3 invInertiaWorldA, Matrix3 invInertiaWorldB) {
    DynamicsJNI.btConeTwistConstraint_calcAngleInfo2(swigCPtr, this, transA, transB, invInertiaWorldA, invInertiaWorldB);
}
