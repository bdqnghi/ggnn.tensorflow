public btTriangleInfoMap getTriangleInfoMap() {
    long cPtr = CollisionJNI.btBvhTriangleMeshShape_getTriangleInfoMap__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btTriangleInfoMap(cPtr, false);
}
