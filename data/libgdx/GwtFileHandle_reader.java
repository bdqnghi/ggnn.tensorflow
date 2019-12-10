/**
 * Returns a buffered reader for reading this file as characters.
 * @throw GdxRuntimeException if the file handle represents a directory, doesn't exist, or could not be read.
 */
public BufferedReader reader(int bufferSize, String charset) {
    return new BufferedReader(reader(charset), bufferSize);
}
