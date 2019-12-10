public void updateSingleAabb(btCollisionObject colObj) {
    CollisionJNI.btCollisionWorld_updateSingleAabb(swigCPtr, this, btCollisionObject.getCPtr(colObj), colObj);
}
