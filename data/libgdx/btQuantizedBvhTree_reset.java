@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(swigCPtr = cPtr, cMemoryOwn);
}
