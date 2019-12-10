public void setPersistentManifold(btPersistentManifold manifoldPtr) {
    CollisionJNI.btManifoldResult_setPersistentManifold(swigCPtr, this, btPersistentManifold.getCPtr(manifoldPtr), manifoldPtr);
}
