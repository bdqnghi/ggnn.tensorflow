public btGEN_Link getNext() {
    long cPtr = LinearMathJNI.btGEN_Link_getNext(swigCPtr, this);
    return (cPtr == 0) ? null : new btGEN_Link(cPtr, false);
}
