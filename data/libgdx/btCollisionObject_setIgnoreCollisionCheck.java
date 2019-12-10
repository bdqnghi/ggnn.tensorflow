public void setIgnoreCollisionCheck(btCollisionObject co, boolean ignoreCollisionCheck) {
    CollisionJNI.btCollisionObject_setIgnoreCollisionCheck(swigCPtr, this, btCollisionObject.getCPtr(co), co, ignoreCollisionCheck);
}
