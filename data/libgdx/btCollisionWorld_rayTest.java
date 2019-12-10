public void rayTest(Vector3 rayFromWorld, Vector3 rayToWorld, RayResultCallback resultCallback) {
    CollisionJNI.btCollisionWorld_rayTest(swigCPtr, this, rayFromWorld, rayToWorld, RayResultCallback.getCPtr(resultCallback), resultCallback);
}
