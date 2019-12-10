/**
 * @return the backing shortbuffer holding the indices. Does not have to be a direct buffer on Android!
 */
public ShortBuffer getIndicesBuffer() {
    return indices.getBuffer();
}
