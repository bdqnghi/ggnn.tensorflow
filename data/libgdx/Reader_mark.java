/**
 * Sets a mark position in this reader. The parameter {@code readLimit} indicates how many characters can be read before the
 * mark is invalidated. Calling {@code reset()} will reposition the reader back to the marked position if {@code readLimit} has
 * not been surpassed.
 * <p>
 * This default implementation simply throws an {@code IOException}; subclasses must provide their own implementation.
 *
 * @param readLimit the number of characters that can be read before the mark is invalidated.
 * @throws IllegalArgumentException if {@code readLimit < 0}.
 * @throws IOException if an error occurs while setting a mark in this reader.
 * @see #markSupported()
 * @see #reset()
 */
public void mark(int readLimit) throws IOException {
    throw new IOException();
}
