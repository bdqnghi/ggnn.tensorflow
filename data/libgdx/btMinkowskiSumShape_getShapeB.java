public btConvexShape getShapeB() {
    long cPtr = CollisionJNI.btMinkowskiSumShape_getShapeB(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexShape(cPtr, false);
}
