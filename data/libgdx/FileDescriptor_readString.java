/**
 * Reads the entire file into a string using the specified charset.
 * @throw RuntimeException if the file handle represents a directory, doesn't exist, or could not be read.
 */
public String readString(String charset) {
    StringBuilder output = new StringBuilder(512);
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
        throw new RuntimeException("Error reading layout file: " + this, ex);
    } finally {
        try {
            if (reader != null)
                reader.close();
        } catch (IOException ignored) {
        }
    }
    return output.toString();
}
