/**
 * Writes the specified bytes to the file. Parent directories will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @throw GdxRuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        {@link FileType#Internal} file, or if it could not be written.
 */
public void writeBytes(byte[] bytes, int offset, int length, boolean append) {
    throw new GdxRuntimeException("Cannot write to files in GWT backend");
}
