public boolean checkCollideWith(btCollisionObject co) {
    return CollisionJNI.btCollisionObject_checkCollideWith(swigCPtr, this, btCollisionObject.getCPtr(co), co);
}
