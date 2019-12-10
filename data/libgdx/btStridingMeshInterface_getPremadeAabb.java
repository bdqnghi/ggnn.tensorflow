public void getPremadeAabb(btVector3 aabbMin, btVector3 aabbMax) {
    CollisionJNI.btStridingMeshInterface_getPremadeAabb(swigCPtr, this, btVector3.getCPtr(aabbMin), aabbMin, btVector3.getCPtr(aabbMax), aabbMax);
}
