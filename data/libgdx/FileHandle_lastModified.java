/**
 * Returns the last modified time in milliseconds for this file. Zero is returned if the file doesn't exist. Zero is returned
 * for {@link FileType#Classpath} files. On Android, zero is returned for {@link FileType#Internal} files. On the desktop, zero
 * is returned for {@link FileType#Internal} files on the classpath.
 */
public long lastModified() {
    throw new GdxRuntimeException("Stub");
}
