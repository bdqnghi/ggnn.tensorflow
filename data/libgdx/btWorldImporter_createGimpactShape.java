public btGImpactMeshShape createGimpactShape(btStridingMeshInterface trimesh) {
    long cPtr = ExtrasJNI.btWorldImporter_createGimpactShape(swigCPtr, this, btStridingMeshInterface.getCPtr(trimesh), trimesh);
    return (cPtr == 0) ? null : new btGImpactMeshShape(cPtr, false);
}
