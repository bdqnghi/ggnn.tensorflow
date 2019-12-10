/**
 * Returns the length in bytes of this file, or 0 if this file is a directory, does not exist, or the size cannot otherwise be
 * determined.
 */
public long length() {
    if (type == FileType.Classpath || !file.exists()) {
        InputStream input = read();
        try {
            return input.available();
        } catch (Exception ignored) {
        } finally {
            try {
                input.close();
            } catch (IOException ignored) {
            }
        }
        return 0;
    }
    return file().length();
}
