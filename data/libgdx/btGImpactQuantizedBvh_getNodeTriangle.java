public void getNodeTriangle(int nodeindex, btPrimitiveTriangle triangle) {
    CollisionJNI.btGImpactQuantizedBvh_getNodeTriangle(swigCPtr, this, nodeindex, btPrimitiveTriangle.getCPtr(triangle), triangle);
}
