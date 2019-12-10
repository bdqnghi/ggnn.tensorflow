public btSliderConstraint createSliderConstraint(btRigidBody rbB, Matrix4 frameInB, boolean useLinearReferenceFrameA) {
    long cPtr = ExtrasJNI.btWorldImporter_createSliderConstraint__SWIG_1(swigCPtr, this, btRigidBody.getCPtr(rbB), rbB, frameInB, useLinearReferenceFrameA);
    return (cPtr == 0) ? null : new btSliderConstraint(cPtr, false);
}
