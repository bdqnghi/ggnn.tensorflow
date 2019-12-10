public void endBlock(btBlock block) {
    LinearMathJNI.btStackAlloc_endBlock(swigCPtr, this, btBlock.getCPtr(block), block);
}
