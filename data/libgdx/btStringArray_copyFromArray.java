public void copyFromArray(btStringArray otherArray) {
    ExtrasJNI.btStringArray_copyFromArray(swigCPtr, this, btStringArray.getCPtr(otherArray), otherArray);
}
