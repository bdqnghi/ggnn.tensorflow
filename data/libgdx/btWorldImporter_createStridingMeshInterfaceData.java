public btStridingMeshInterfaceData createStridingMeshInterfaceData(btStridingMeshInterfaceData interfaceData) {
    long cPtr = ExtrasJNI.btWorldImporter_createStridingMeshInterfaceData(swigCPtr, this, btStridingMeshInterfaceData.getCPtr(interfaceData), interfaceData);
    return (cPtr == 0) ? null : new btStridingMeshInterfaceData(cPtr, false);
}
