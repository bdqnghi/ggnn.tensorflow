public btGeneric6DofSpringConstraint createGeneric6DofSpringConstraint(btRigidBody rbA, btRigidBody rbB, Matrix4 frameInA, Matrix4 frameInB, boolean useLinearReferenceFrameA) {
    long cPtr = ExtrasJNI.btWorldImporter_createGeneric6DofSpringConstraint(swigCPtr, this, btRigidBody.getCPtr(rbA), rbA, btRigidBody.getCPtr(rbB), rbB, frameInA, frameInB, useLinearReferenceFrameA);
    return (cPtr == 0) ? null : new btGeneric6DofSpringConstraint(cPtr, false);
}
