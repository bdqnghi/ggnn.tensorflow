public void getAllContactManifolds(btPersistentManifoldArray manifoldArray) {
    CollisionJNI.btCompoundCompoundCollisionAlgorithm_getAllContactManifolds(swigCPtr, this, btPersistentManifoldArray.getCPtr(manifoldArray), manifoldArray);
}
