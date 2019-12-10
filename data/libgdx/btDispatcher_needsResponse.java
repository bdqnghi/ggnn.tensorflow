public boolean needsResponse(btCollisionObject body0, btCollisionObject body1) {
    return CollisionJNI.btDispatcher_needsResponse(swigCPtr, this, btCollisionObject.getCPtr(body0), body0, btCollisionObject.getCPtr(body1), body1);
}
