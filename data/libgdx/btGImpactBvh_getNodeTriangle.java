public void getNodeTriangle(int nodeindex, btPrimitiveTriangle triangle) {
    CollisionJNI.btGImpactBvh_getNodeTriangle(swigCPtr, this, nodeindex, btPrimitiveTriangle.getCPtr(triangle), triangle);
}
