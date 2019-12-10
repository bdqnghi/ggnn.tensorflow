public void getBulletTriangle(int prim_index, btTriangleShapeEx triangle) {
    CollisionJNI.btGImpactShapeInterface_getBulletTriangle(swigCPtr, this, prim_index, btTriangleShapeEx.getCPtr(triangle), triangle);
}
