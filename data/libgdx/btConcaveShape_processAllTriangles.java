public void processAllTriangles(btTriangleCallback callback, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btConcaveShape_processAllTriangles(swigCPtr, this, btTriangleCallback.getCPtr(callback), callback, aabbMin, aabbMax);
}
