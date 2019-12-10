public btBvhTriangleMeshShape getChildShape() {
    long cPtr = CollisionJNI.btScaledBvhTriangleMeshShape_getChildShape__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btBvhTriangleMeshShape(cPtr, false);
}
