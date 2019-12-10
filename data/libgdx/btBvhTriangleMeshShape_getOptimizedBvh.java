public btOptimizedBvh getOptimizedBvh() {
    long cPtr = CollisionJNI.btBvhTriangleMeshShape_getOptimizedBvh(swigCPtr, this);
    return (cPtr == 0) ? null : new btOptimizedBvh(cPtr, false);
}
