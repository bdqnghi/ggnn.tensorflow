/**
 * Reads the remaining bytes from the specified stream and writes them to this file. The stream is closed. Parent directories
 * will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @throw GdxRuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        {@link FileType#Internal} file, or if it could not be written.
 */
public void write(InputStream input, boolean append) {
    OutputStream output = null;
    try {
        output = write(append);
        byte[] buffer = new byte[4096];
        while (true) {
            int length = input.read(buffer);
            if (length == -1)
                break;
            output.write(buffer, 0, length);
        }
    } catch (Exception ex) {
        throw new GdxRuntimeException("Error stream writing to file: " + file + " (" + type + ")", ex);
    } finally {
        try {
            if (input != null)
                input.close();
        } catch (Exception ignored) {
        }
        try {
            if (output != null)
                output.close();
        } catch (Exception ignored) {
        }
    }
}
