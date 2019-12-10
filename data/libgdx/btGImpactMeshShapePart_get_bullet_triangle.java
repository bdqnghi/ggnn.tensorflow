public void get_bullet_triangle(int prim_index, btTriangleShapeEx triangle) {
    CollisionJNI.btGImpactMeshShapePart_TrimeshPrimitiveManager_get_bullet_triangle(swigCPtr, this, prim_index, btTriangleShapeEx.getCPtr(triangle), triangle);
}
