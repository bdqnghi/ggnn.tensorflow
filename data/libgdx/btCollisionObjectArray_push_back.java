public void push_back(btCollisionObject _Val) {
    CollisionJNI.btCollisionObjectArray_push_back(swigCPtr, this, btCollisionObject.getCPtr(_Val), _Val);
}
