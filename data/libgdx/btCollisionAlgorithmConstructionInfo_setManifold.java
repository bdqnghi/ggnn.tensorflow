public void setManifold(btPersistentManifold value) {
    CollisionJNI.btCollisionAlgorithmConstructionInfo_manifold_set(swigCPtr, this, btPersistentManifold.getCPtr(value), value);
}
