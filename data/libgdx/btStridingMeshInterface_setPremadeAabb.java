public void setPremadeAabb(Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btStridingMeshInterface_setPremadeAabb(swigCPtr, this, aabbMin, aabbMax);
}
