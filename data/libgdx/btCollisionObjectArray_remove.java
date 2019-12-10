public void remove(btCollisionObject key) {
    CollisionJNI.btCollisionObjectArray_remove(swigCPtr, this, btCollisionObject.getCPtr(key), key);
}
