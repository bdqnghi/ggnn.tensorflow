public boolean needsCollision(btBroadphaseProxy proxy0) {
    return (getClass() == RayResultCallback.class) ? CollisionJNI.RayResultCallback_needsCollision(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0) : CollisionJNI.RayResultCallback_needsCollisionSwigExplicitRayResultCallback(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0);
}
