public void copyFromArray(btPersistentManifoldArray otherArray) {
    CollisionJNI.btPersistentManifoldArray_copyFromArray(swigCPtr, this, btPersistentManifoldArray.getCPtr(otherArray), otherArray);
}
