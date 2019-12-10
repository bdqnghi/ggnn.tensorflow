public btGImpactMeshShapePart getMeshPart(int index) {
    long cPtr = CollisionJNI.btGImpactMeshShape_getMeshPart__SWIG_0(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btGImpactMeshShapePart(cPtr, false);
}
