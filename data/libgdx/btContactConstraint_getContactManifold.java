public btPersistentManifold getContactManifold() {
    long cPtr = DynamicsJNI.btContactConstraint_getContactManifold__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
