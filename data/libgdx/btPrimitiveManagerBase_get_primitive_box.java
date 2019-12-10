public void get_primitive_box(int prim_index, btAABB primbox) {
    CollisionJNI.btPrimitiveManagerBase_get_primitive_box(swigCPtr, this, prim_index, btAABB.getCPtr(primbox), primbox);
}
