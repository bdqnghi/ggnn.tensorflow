public btTriangleIndexVertexArray createTriangleMeshContainer() {
    long cPtr = ExtrasJNI.btWorldImporter_createTriangleMeshContainer(swigCPtr, this);
    return (cPtr == 0) ? null : new btTriangleIndexVertexArray(cPtr, false);
}
