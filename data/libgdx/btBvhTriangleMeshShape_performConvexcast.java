public void performConvexcast(btTriangleCallback callback, Vector3 boxSource, Vector3 boxTarget, Vector3 boxMin, Vector3 boxMax) {
    CollisionJNI.btBvhTriangleMeshShape_performConvexcast(swigCPtr, this, btTriangleCallback.getCPtr(callback), callback, boxSource, boxTarget, boxMin, boxMax);
}
