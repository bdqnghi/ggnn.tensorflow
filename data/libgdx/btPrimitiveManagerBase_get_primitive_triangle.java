public void get_primitive_triangle(int prim_index, btPrimitiveTriangle triangle) {
    CollisionJNI.btPrimitiveManagerBase_get_primitive_triangle(swigCPtr, this, prim_index, btPrimitiveTriangle.getCPtr(triangle), triangle);
}
