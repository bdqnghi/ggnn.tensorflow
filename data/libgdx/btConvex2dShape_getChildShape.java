public btConvexShape getChildShape() {
    long cPtr = CollisionJNI.btConvex2dShape_getChildShape__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexShape(cPtr, false);
}
