/**
 * Reallocate a float buffer. A 'deferred' buffer is reallocated only if it is not NULL. If
 * 'userSuppliedCapacity' is not zero, buffer is user supplied and must be kept.
 */
public static float[] reallocateBuffer(float[] buffer, int userSuppliedCapacity, int oldCapacity, int newCapacity, boolean deferred) {
    assert (newCapacity > oldCapacity);
    assert (userSuppliedCapacity == 0 || newCapacity <= userSuppliedCapacity);
    if ((!deferred || buffer != null) && userSuppliedCapacity == 0) {
        buffer = reallocateBuffer(buffer, oldCapacity, newCapacity);
    }
    return buffer;
}
