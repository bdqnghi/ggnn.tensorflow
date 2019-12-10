public boolean checkCollideWithOverride(btCollisionObject co) {
    return CollisionJNI.btCollisionObject_checkCollideWithOverride(swigCPtr, this, btCollisionObject.getCPtr(co), co);
}
