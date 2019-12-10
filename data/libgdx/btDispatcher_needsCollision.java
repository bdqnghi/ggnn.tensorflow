public boolean needsCollision(btCollisionObject body0, btCollisionObject body1) {
    return CollisionJNI.btDispatcher_needsCollision(swigCPtr, this, btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1);
}
