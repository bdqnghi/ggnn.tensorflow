public SWIGTYPE_p_p_btPersistentManifold getInternalManifoldPointer() {
    long cPtr = CollisionJNI.btDispatcher_getInternalManifoldPointer(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_btPersistentManifold(cPtr, false);
}
