public btScaledBvhTriangleMeshShape createScaledTrangleMeshShape(btBvhTriangleMeshShape meshShape, Vector3 localScalingbtBvhTriangleMeshShape) {
    long cPtr = ExtrasJNI.btWorldImporter_createScaledTrangleMeshShape(swigCPtr, this, btBvhTriangleMeshShape.getCPtr(meshShape), meshShape, localScalingbtBvhTriangleMeshShape);
    return (cPtr == 0) ? null : new btScaledBvhTriangleMeshShape(cPtr, false);
}
