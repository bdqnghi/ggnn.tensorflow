public void getPrimitiveTriangle(int index, btPrimitiveTriangle triangle) {
    CollisionJNI.btGImpactShapeInterface_getPrimitiveTriangle(swigCPtr, this, index, btPrimitiveTriangle.getCPtr(triangle), triangle);
}
