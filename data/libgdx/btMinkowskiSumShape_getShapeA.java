public btConvexShape getShapeA() {
    long cPtr = CollisionJNI.btMinkowskiSumShape_getShapeA(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexShape(cPtr, false);
}
