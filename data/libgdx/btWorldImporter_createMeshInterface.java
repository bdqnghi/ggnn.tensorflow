public btTriangleIndexVertexArray createMeshInterface(btStridingMeshInterfaceData meshData) {
    long cPtr = ExtrasJNI.btWorldImporter_createMeshInterface(swigCPtr, this, btStridingMeshInterfaceData.getCPtr(meshData), meshData);
    return (cPtr == 0) ? null : new btTriangleIndexVertexArray(cPtr, false);
}
