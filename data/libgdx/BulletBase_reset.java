protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    swigCMemOwn = cMemoryOwn;
    cPointer = cPtr;
    construct();
}
