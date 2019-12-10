public btVector3 getVertices1() {
    long cPtr = CollisionJNI.btTriangleShape_vertices1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
