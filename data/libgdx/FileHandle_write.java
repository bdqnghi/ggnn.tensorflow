/**
 * Reads the remaining bytes from the specified stream and writes them to this file. The stream is closed. Parent directories
 * will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @throw GdxRuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        {@link FileType#Internal} file, or if it could not be written.
 */
public void write(InputStream input, boolean append) {
    throw new GdxRuntimeException("Stub");
}
