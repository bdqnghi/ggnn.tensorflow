public void setConvexFromWorld(btVector3 value) {
    CollisionJNI.ClosestConvexResultCallback_convexFromWorld_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
