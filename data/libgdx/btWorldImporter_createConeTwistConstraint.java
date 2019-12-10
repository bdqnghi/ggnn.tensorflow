public btConeTwistConstraint createConeTwistConstraint(btRigidBody rbA, Matrix4 rbAFrame) {
    long cPtr = ExtrasJNI.btWorldImporter_createConeTwistConstraint__SWIG_1(swigCPtr, this, btRigidBody.getCPtr(rbA), rbA, rbAFrame);
    return (cPtr == 0) ? null : new btConeTwistConstraint(cPtr, false);
}
