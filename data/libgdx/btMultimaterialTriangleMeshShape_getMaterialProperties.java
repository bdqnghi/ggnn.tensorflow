public btMaterial getMaterialProperties(int partID, int triIndex) {
    long cPtr = CollisionJNI.btMultimaterialTriangleMeshShape_getMaterialProperties(swigCPtr, this, partID, triIndex);
    return (cPtr == 0) ? null : new btMaterial(cPtr, false);
}
