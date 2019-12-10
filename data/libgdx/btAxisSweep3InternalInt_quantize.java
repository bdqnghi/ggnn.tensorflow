public void quantize(java.nio.LongBuffer out, Vector3 point, int isMax) {
    assert out.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btAxisSweep3InternalInt_quantize(swigCPtr, this, out, point, isMax);
    }
}
