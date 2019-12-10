public void setPrimitiveManager(btPrimitiveManagerBase primitive_manager) {
    CollisionJNI.btGImpactBvh_setPrimitiveManager(swigCPtr, this, btPrimitiveManagerBase.getCPtr(primitive_manager), primitive_manager);
}
