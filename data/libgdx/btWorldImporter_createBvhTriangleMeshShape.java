public btBvhTriangleMeshShape createBvhTriangleMeshShape(btStridingMeshInterface trimesh, btOptimizedBvh bvh) {
    long cPtr = ExtrasJNI.btWorldImporter_createBvhTriangleMeshShape(swigCPtr, this, btStridingMeshInterface.getCPtr(trimesh), trimesh, btOptimizedBvh.getCPtr(bvh), bvh);
    return (cPtr == 0) ? null : new btBvhTriangleMeshShape(cPtr, false);
}
