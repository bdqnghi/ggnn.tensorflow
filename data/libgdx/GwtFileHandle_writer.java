/**
 * Returns a writer for writing to this file. Parent directories will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @param charset May be null to use the default charset.
 * @throw GdxRuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        {@link FileType#Internal} file, or if it could not be written.
 */
public Writer writer(boolean append, String charset) {
    throw new GdxRuntimeException("Cannot write to files in GWT backend");
}
