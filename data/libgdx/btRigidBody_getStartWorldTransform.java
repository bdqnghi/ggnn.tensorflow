public btTransform getStartWorldTransform() {
    long cPtr = DynamicsJNI.btRigidBody_btRigidBodyConstructionInfo_startWorldTransform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
