/**
 * Reads the entire file into the byte array. The byte array must be big enough to hold the file's data.
 * @param bytes the array to load the file into
 * @param offset the offset to start writing bytes
 * @param size the number of bytes to read, see {@link #length()}
 * @return the number of read bytes
 */
public int readBytes(byte[] bytes, int offset, int size) {
    InputStream input = read();
    int position = 0;
    try {
        while (true) {
            int count = input.read(bytes, offset + position, size - position);
            if (count <= 0)
                break;
            position += count;
        }
    } catch (IOException ex) {
        throw new RuntimeException("Error reading file: " + this, ex);
    } finally {
        try {
            if (input != null)
                input.close();
        } catch (IOException ignored) {
        }
    }
    return position - offset;
}
