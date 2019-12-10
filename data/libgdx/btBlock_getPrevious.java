public btBlock getPrevious() {
    long cPtr = LinearMathJNI.btBlock_previous_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btBlock(cPtr, false);
}
