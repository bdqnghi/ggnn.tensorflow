public void rayTest(Vector3 rayFrom, Vector3 rayTo, RayResultCallback resultCallback) {
    CollisionJNI.btGImpactShapeInterface_rayTest(swigCPtr, this, rayFrom, rayTo, RayResultCallback.getCPtr(resultCallback), resultCallback);
}
