public void contactPairTest(btCollisionObject colObjA, btCollisionObject colObjB, ContactResultCallback resultCallback) {
    CollisionJNI.btCollisionWorld_contactPairTest(swigCPtr, this, btCollisionObject.getCPtr(colObjA), colObjA, btCollisionObject.getCPtr(colObjB), colObjB, ContactResultCallback.getCPtr(resultCallback), resultCallback);
}
