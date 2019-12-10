public void copyFromArray(btCollisionObjectArray otherArray) {
    CollisionJNI.btCollisionObjectArray_copyFromArray(swigCPtr, this, btCollisionObjectArray.getCPtr(otherArray), otherArray);
}
