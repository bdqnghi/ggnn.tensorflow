public btGeneric6DofSpring2Constraint createGeneric6DofSpring2Constraint(btRigidBody rbA, btRigidBody rbB, Matrix4 frameInA, Matrix4 frameInB, int rotateOrder) {
    long cPtr = ExtrasJNI.btWorldImporter_createGeneric6DofSpring2Constraint(swigCPtr, this, btRigidBody.getCPtr(rbA), rbA, btRigidBody.getCPtr(rbB), rbB, frameInA, frameInB, rotateOrder);
    return (cPtr == 0) ? null : new btGeneric6DofSpring2Constraint(cPtr, false);
}
