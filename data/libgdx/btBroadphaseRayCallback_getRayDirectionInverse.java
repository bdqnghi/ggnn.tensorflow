public btVector3 getRayDirectionInverse() {
    long cPtr = CollisionJNI.btBroadphaseRayCallback_rayDirectionInverse_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
