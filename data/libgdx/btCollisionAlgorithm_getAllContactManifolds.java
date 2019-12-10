public void getAllContactManifolds(btPersistentManifoldArray manifoldArray) {
    CollisionJNI.btCollisionAlgorithm_getAllContactManifolds(swigCPtr, this, btPersistentManifoldArray.getCPtr(manifoldArray), manifoldArray);
}
