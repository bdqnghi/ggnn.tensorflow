public btCollisionShape createConvexTriangleMeshShape(btStridingMeshInterface trimesh) {
    long cPtr = ExtrasJNI.btWorldImporter_createConvexTriangleMeshShape(swigCPtr, this, btStridingMeshInterface.getCPtr(trimesh), trimesh);
    return (cPtr == 0) ? null : btCollisionShape.newDerivedObject(cPtr, false);
}
