public void testLimit(Matrix4 transA, Matrix4 transB) {
    DynamicsJNI.btHingeConstraint_testLimit(swigCPtr, this, transA, transB);
}
