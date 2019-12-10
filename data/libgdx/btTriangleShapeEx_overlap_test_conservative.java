public boolean overlap_test_conservative(btTriangleShapeEx other) {
    return CollisionJNI.btTriangleShapeEx_overlap_test_conservative(swigCPtr, this, btTriangleShapeEx.getCPtr(other), other);
}
