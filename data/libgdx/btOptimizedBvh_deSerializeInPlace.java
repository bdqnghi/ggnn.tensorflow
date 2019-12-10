public static btOptimizedBvh deSerializeInPlace(long i_alignedDataBuffer, long i_dataBufferSize, boolean i_swapEndian) {
    long cPtr = CollisionJNI.btOptimizedBvh_deSerializeInPlace(i_alignedDataBuffer, i_dataBufferSize, i_swapEndian);
    return (cPtr == 0) ? null : new btOptimizedBvh(cPtr, false);
}
