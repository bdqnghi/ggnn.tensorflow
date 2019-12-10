public boolean needsCollision(btBroadphaseProxy proxy0) {
    return (getClass() == ConvexResultCallback.class) ? CollisionJNI.ConvexResultCallback_needsCollision(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0) : CollisionJNI.ConvexResultCallback_needsCollisionSwigExplicitConvexResultCallback(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0);
}
