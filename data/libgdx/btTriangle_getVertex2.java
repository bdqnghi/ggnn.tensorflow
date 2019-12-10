public btVector3 getVertex2() {
    long cPtr = CollisionJNI.btTriangle_vertex2_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
