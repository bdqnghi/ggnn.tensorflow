public btConvexShape getChildShape() {
    long cPtr = CollisionJNI.btUniformScalingShape_getChildShape__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexShape(cPtr, false);
}
