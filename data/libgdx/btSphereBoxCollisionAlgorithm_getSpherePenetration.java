public float getSpherePenetration(Vector3 boxHalfExtent, Vector3 sphereRelPos, Vector3 closestPoint, Vector3 normal) {
    return CollisionJNI.btSphereBoxCollisionAlgorithm_getSpherePenetration(swigCPtr, this, boxHalfExtent, sphereRelPos, closestPoint, normal);
}
