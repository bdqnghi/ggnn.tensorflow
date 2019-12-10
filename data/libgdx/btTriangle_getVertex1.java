public btVector3 getVertex1() {
    long cPtr = CollisionJNI.btTriangle_vertex1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
