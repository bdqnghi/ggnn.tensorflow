public boolean needsCollision(btBroadphaseProxy proxy0) {
    return CollisionJNI.ClosestNotMeConvexResultCallback_needsCollision(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0);
}
