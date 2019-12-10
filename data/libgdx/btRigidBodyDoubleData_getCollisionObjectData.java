public btCollisionObjectDoubleData getCollisionObjectData() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_collisionObjectData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionObjectDoubleData(cPtr, false);
}
