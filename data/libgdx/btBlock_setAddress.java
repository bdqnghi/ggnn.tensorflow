public void setAddress(java.nio.ByteBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        LinearMathJNI.btBlock_address_set(swigCPtr, this, value);
    }
}
