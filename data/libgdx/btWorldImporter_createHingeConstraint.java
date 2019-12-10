public btHingeConstraint createHingeConstraint(btRigidBody rbA, Matrix4 rbAFrame) {
    long cPtr = ExtrasJNI.btWorldImporter_createHingeConstraint__SWIG_3(swigCPtr, this, btRigidBody.getCPtr(rbA), rbA, rbAFrame);
    return (cPtr == 0) ? null : new btHingeConstraint(cPtr, false);
}
