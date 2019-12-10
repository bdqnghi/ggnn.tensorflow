public void calculateAabbBruteForce(Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btStridingMeshInterface_calculateAabbBruteForce(swigCPtr, this, aabbMin, aabbMax);
}
