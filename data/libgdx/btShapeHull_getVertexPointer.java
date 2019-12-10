public btVector3 getVertexPointer() {
    long cPtr = CollisionJNI.btShapeHull_getVertexPointer(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
