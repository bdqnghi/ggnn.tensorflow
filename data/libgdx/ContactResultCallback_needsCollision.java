public boolean needsCollision(btBroadphaseProxy proxy0) {
    return (getClass() == ContactResultCallback.class) ? CollisionJNI.ContactResultCallback_needsCollision(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0) : CollisionJNI.ContactResultCallback_needsCollisionSwigExplicitContactResultCallback(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0);
}
