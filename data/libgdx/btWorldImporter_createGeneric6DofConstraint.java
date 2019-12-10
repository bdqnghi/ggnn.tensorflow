public btGeneric6DofConstraint createGeneric6DofConstraint(btRigidBody rbB, Matrix4 frameInB, boolean useLinearReferenceFrameB) {
    long cPtr = ExtrasJNI.btWorldImporter_createGeneric6DofConstraint__SWIG_1(swigCPtr, this, btRigidBody.getCPtr(rbB), rbB, frameInB, useLinearReferenceFrameB);
    return (cPtr == 0) ? null : new btGeneric6DofConstraint(cPtr, false);
}
