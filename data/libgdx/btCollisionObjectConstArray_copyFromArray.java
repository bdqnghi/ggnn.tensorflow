public void copyFromArray(btCollisionObjectConstArray otherArray) {
    CollisionJNI.btCollisionObjectConstArray_copyFromArray(swigCPtr, this, btCollisionObjectConstArray.getCPtr(otherArray), otherArray);
}
