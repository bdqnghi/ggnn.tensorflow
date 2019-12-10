public btGEN_Link getPrev() {
    long cPtr = LinearMathJNI.btGEN_Link_getPrev(swigCPtr, this);
    return (cPtr == 0) ? null : new btGEN_Link(cPtr, false);
}
