public btGEN_Link getTail() {
    long cPtr = LinearMathJNI.btGEN_List_getTail(swigCPtr, this);
    return (cPtr == 0) ? null : new btGEN_Link(cPtr, false);
}
