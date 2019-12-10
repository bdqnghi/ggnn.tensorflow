/**
 * Reads the entire file into a string using the specified charset.
 * @throw GdxRuntimeException if the file handle represents a directory, doesn't exist, or could not be read.
 */
public String readString(String charset) {
    int fileLength = (int) length();
    if (fileLength == 0)
        fileLength = 512;
    StringBuilder output = new StringBuilder(fileLength);
    InputStreamReader reader = null;
    try {
        if (charset == null)
            reader = new InputStreamReader(read());
        else
            reader = new InputStreamReader(read(), charset);
        char[] buffer = new char[256];
        while (true) {
            int length = reader.read(buffer);
            if (length == -1)
                break;
            output.append(buffer, 0, length);
        }
    } catch (IOException ex) {
        throw new GdxRuntimeException("Error reading layout file: " + this, ex);
    } finally {
        StreamUtils.closeQuietly(reader);
    }
    return output.toString();
}
