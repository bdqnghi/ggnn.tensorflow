public btBlock beginBlock() {
    long cPtr = LinearMathJNI.btStackAlloc_beginBlock(swigCPtr, this);
    return (cPtr == 0) ? null : new btBlock(cPtr, false);
}
