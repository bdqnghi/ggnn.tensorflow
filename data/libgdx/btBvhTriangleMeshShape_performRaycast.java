public void performRaycast(btTriangleCallback callback, Vector3 raySource, Vector3 rayTarget) {
    CollisionJNI.btBvhTriangleMeshShape_performRaycast(swigCPtr, this, btTriangleCallback.getCPtr(callback), callback, raySource, rayTarget);
}
