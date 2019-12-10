public void contactTest(btCollisionObject colObj, ContactResultCallback resultCallback) {
    CollisionJNI.btCollisionWorld_contactTest(swigCPtr, this, btCollisionObject.getCPtr(colObj), colObj, ContactResultCallback.getCPtr(resultCallback), resultCallback);
}
