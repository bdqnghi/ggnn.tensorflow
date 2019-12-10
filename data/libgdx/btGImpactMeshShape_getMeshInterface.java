public btStridingMeshInterface getMeshInterface() {
    long cPtr = CollisionJNI.btGImpactMeshShape_getMeshInterface__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btStridingMeshInterface(cPtr, false);
}
