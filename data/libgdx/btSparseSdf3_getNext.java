public btSparseSdf3.Cell getNext() {
    long cPtr = SoftbodyJNI.btSparseSdf3_Cell_next_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSparseSdf3.Cell(cPtr, false);
}
