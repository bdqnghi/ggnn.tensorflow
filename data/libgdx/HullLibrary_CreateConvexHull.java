public int CreateConvexHull(HullDesc desc, HullResult result) {
    return LinearMathJNI.HullLibrary_CreateConvexHull(swigCPtr, this, HullDesc.getCPtr(desc), desc, HullResult.getCPtr(result), result);
}
