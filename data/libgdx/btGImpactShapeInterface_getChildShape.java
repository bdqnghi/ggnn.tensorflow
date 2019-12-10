public btCollisionShape getChildShape(int index) {
    long cPtr = CollisionJNI.btGImpactShapeInterface_getChildShape__SWIG_0(swigCPtr, this, index);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
