public btCollisionConfiguration getCollisionConfiguration() {
    long cPtr = CollisionJNI.btCollisionDispatcher_getCollisionConfiguration__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btCollisionConfiguration(cPtr, false);
}
