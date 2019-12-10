public btCollisionWorld getCollisionWorld() {
    long cPtr = DynamicsJNI.btDiscreteDynamicsWorld_getCollisionWorld(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionWorld(cPtr, false);
}
