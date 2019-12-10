/**
 * Indicates whether this reader is ready to be read without blocking. Returns {@code true} if this reader will not block when
 * {@code read} is called, {@code false} if unknown or blocking will occur. This default implementation always returns
 * {@code false}.
 *
 * @return always {@code false}.
 * @throws IOException if this reader is closed or some other I/O error occurs.
 * @see #read()
 * @see #read(char[])
 * @see #read(char[], int, int)
 */
public boolean ready() throws IOException {
    return false;
}
