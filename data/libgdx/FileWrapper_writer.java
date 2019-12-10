/**
 * Returns a writer for writing to this file. Parent directories will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @param charset May be null to use the default charset.
 * @throw GdxRuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        {@link FileType#Internal} file, or if it could not be written.
 */
public Writer writer(boolean append, String charset) {
    if (type == FileType.Classpath)
        throw new GdxRuntimeException("Cannot write to a classpath file: " + file);
    if (type == FileType.Internal)
        throw new GdxRuntimeException("Cannot write to an internal file: " + file);
    parent().mkdirs();
    try {
        FileOutputStream output = new FileOutputStream(file(), append);
        if (charset == null)
            return new OutputStreamWriter(output);
        else
            return new OutputStreamWriter(output, charset);
    } catch (IOException ex) {
        if (file().isDirectory())
            throw new GdxRuntimeException("Cannot open a stream to a directory: " + file + " (" + type + ")", ex);
        throw new GdxRuntimeException("Error writing file: " + file + " (" + type + ")", ex);
    }
}
