public int ReleaseResult(HullResult result) {
    return LinearMathJNI.HullLibrary_ReleaseResult(swigCPtr, this, HullResult.getCPtr(result), result);
}
