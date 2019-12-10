public void remove(btCollisionObject key) {
    CollisionJNI.btCollisionObjectConstArray_remove(swigCPtr, this, btCollisionObject.getCPtr(key), key);
}
