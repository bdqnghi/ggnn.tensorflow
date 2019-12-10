public void copyFromArray(btVector3Array otherArray) {
    LinearMathJNI.btVector3Array_copyFromArray(swigCPtr, this, btVector3Array.getCPtr(otherArray), otherArray);
}
