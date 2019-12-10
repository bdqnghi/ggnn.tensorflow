public void setContactManifold(btPersistentManifold contactManifold) {
    DynamicsJNI.btContactConstraint_setContactManifold(swigCPtr, this, btPersistentManifold.getCPtr(contactManifold), contactManifold);
}
