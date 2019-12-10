public btVector3FloatData getVertices3f() {
    long cPtr = CollisionJNI.btMeshPartData_vertices3f_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
