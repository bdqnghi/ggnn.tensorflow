public btPoint2PointConstraint createPoint2PointConstraint(btRigidBody rbA, Vector3 pivotInA) {
    long cPtr = ExtrasJNI.btWorldImporter_createPoint2PointConstraint__SWIG_1(swigCPtr, this, btRigidBody.getCPtr(rbA), rbA, pivotInA);
    return (cPtr == 0) ? null : new btPoint2PointConstraint(cPtr, false);
}
