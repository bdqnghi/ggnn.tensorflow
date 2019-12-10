/**
 * Writes the specified string to the file as UTF-8. Parent directories will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @param charset May be null to use the default charset.
 * @throw RuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        FileType#Internal file, or if it could not be written.
 */
public void writeString(String string, boolean append, String charset) {
    Writer writer = null;
    try {
        writer = writer(append, charset);
        writer.write(string);
    } catch (Exception ex) {
        throw new RuntimeException("Error writing file: " + file + " (" + type + ")", ex);
    } finally {
        try {
            if (writer != null)
                writer.close();
        } catch (Exception ignored) {
        }
    }
}
