public btGImpactQuantizedBvh getBoxSet() {
    long cPtr = CollisionJNI.btGImpactShapeInterface_getBoxSet(swigCPtr, this);
    return (cPtr == 0) ? null : new btGImpactQuantizedBvh(cPtr, false);
}
