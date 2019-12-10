public SWIGTYPE_p_btGearConstraint createGearConstraint(btRigidBody rbA, btRigidBody rbB, Vector3 axisInA, Vector3 axisInB, float ratio) {
    long cPtr = ExtrasJNI.btWorldImporter_createGearConstraint(swigCPtr, this, btRigidBody.getCPtr(rbA), rbA, btRigidBody.getCPtr(rbB), rbB, axisInA, axisInB, ratio);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btGearConstraint(cPtr, false);
}
