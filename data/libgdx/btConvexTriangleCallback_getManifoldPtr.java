public btPersistentManifold getManifoldPtr() {
    long cPtr = CollisionJNI.btConvexTriangleCallback_manifoldPtr_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
