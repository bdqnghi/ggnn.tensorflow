public boolean overlap_test_conservative(btPrimitiveTriangle other) {
    return CollisionJNI.btPrimitiveTriangle_overlap_test_conservative(swigCPtr, this, btPrimitiveTriangle.getCPtr(other), other);
}
