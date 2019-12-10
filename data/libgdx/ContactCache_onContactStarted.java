public void onContactStarted(btPersistentManifold manifold, boolean match0, boolean match1) {
    CollisionJNI.ContactCache_onContactStarted(swigCPtr, this, btPersistentManifold.getCPtr(manifold), manifold, match0, match1);
}
