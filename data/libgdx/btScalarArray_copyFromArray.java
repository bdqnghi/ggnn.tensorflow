public void copyFromArray(btScalarArray otherArray) {
    LinearMathJNI.btScalarArray_copyFromArray(swigCPtr, this, btScalarArray.getCPtr(otherArray), otherArray);
}
