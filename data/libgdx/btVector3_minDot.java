public int minDot(btVector3 array, int array_count, SWIGTYPE_p_float dotOut) {
    return LinearMathJNI.btVector3_minDot(swigCPtr, this, btVector3.getCPtr(array), array, array_count, SWIGTYPE_p_float.getCPtr(dotOut));
}
