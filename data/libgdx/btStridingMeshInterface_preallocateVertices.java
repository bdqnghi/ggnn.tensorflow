public void preallocateVertices(int numverts) {
    CollisionJNI.btStridingMeshInterface_preallocateVertices(swigCPtr, this, numverts);
}
