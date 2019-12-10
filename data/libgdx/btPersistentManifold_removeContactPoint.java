public void removeContactPoint(int index) {
    CollisionJNI.btPersistentManifold_removeContactPoint(swigCPtr, this, index);
}
