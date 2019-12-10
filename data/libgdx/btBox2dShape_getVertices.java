public btVector3 getVertices() {
    long cPtr = CollisionJNI.btBox2dShape_getVertices(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
