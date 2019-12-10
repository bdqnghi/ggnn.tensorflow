public static btQuantizedBvh deSerializeInPlace(long i_alignedDataBuffer, long i_dataBufferSize, boolean i_swapEndian) {
    long cPtr = CollisionJNI.btQuantizedBvh_deSerializeInPlace(i_alignedDataBuffer, i_dataBufferSize, i_swapEndian);
    return (cPtr == 0) ? null : new btQuantizedBvh(cPtr, false);
}
