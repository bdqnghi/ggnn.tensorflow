public btGEN_Link getHead() {
    long cPtr = LinearMathJNI.btGEN_List_getHead(swigCPtr, this);
    return (cPtr == 0) ? null : new btGEN_Link(cPtr, false);
}
