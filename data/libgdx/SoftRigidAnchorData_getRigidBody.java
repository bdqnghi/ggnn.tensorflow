public btRigidBodyFloatData getRigidBody() {
    long cPtr = SoftbodyJNI.SoftRigidAnchorData_rigidBody_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btRigidBodyFloatData(cPtr, false);
}
