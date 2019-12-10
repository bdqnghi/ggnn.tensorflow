/**
 * Writes the specified bytes to the file. Parent directories will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @throw RuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        FileType#Internal file, or if it could not be written.
 */
public void writeBytes(byte[] bytes, boolean append) {
    OutputStream output = write(append);
    try {
        output.write(bytes);
    } catch (IOException ex) {
        throw new RuntimeException("Error writing file: " + file + " (" + type + ")", ex);
    } finally {
        try {
            output.close();
        } catch (IOException ignored) {
        }
    }
}
