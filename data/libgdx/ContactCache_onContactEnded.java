public void onContactEnded(btCollisionObject colObj0, boolean match0, btCollisionObject colObj1, boolean match1) {
    CollisionJNI.ContactCache_onContactEnded(swigCPtr, this, btCollisionObject.getCPtr(colObj0), colObj0, match0, btCollisionObject.getCPtr(colObj1), colObj1, match1);
}
