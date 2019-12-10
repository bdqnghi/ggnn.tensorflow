public btCollisionObjectFloatData getCollisionObjectData() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_collisionObjectData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionObjectFloatData(cPtr, false);
}
