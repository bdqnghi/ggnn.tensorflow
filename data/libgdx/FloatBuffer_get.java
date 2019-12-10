/**
 * Reads floats from the current position into the specified float array, starting from the specified offset, and increases the
 * position by the number of floats read.
 *
 * @param dest the target float array.
 * @param off the offset of the float array, must not be negative and no greater than {@code dest.length}.
 * @param len the number of floats to read, must be no less than zero and no greater than {@code dest.length - off}.
 * @return this buffer.
 * @exception IndexOutOfBoundsException if either {@code off} or {@code len} is invalid.
 * @exception BufferUnderflowException if {@code len} is greater than {@code remaining()}.
 * @since Android 1.0
 */
public FloatBuffer get(float[] dest, int off, int len) {
    int length = dest.length;
    if (off < 0 || len < 0 || (long) off + (long) len > length) {
        throw new IndexOutOfBoundsException();
    }
    if (len > remaining()) {
        throw new BufferUnderflowException();
    }
    for (int i = off; i < off + len; i++) {
        dest[i] = get();
    }
    return this;
}
