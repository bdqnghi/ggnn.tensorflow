public boolean serializeInPlace(long o_alignedDataBuffer, long i_dataBufferSize, boolean i_swapEndian) {
    return CollisionJNI.btOptimizedBvh_serializeInPlace(swigCPtr, this, o_alignedDataBuffer, i_dataBufferSize, i_swapEndian);
}
