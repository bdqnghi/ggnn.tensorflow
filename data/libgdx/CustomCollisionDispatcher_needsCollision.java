public boolean needsCollision(btCollisionObject body0, btCollisionObject body1) {
    return (getClass() == CustomCollisionDispatcher.class) ? CollisionJNI.CustomCollisionDispatcher_needsCollision(swigCPtr, this, btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1) : CollisionJNI.CustomCollisionDispatcher_needsCollisionSwigExplicitCustomCollisionDispatcher(swigCPtr, this, btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1);
}
