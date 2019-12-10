/**
 * Returns a writer for writing to this file. Parent directories will be created if necessary.
 * @param append If false, this file will be overwritten if it exists, otherwise it will be appended.
 * @param charset May be null to use the default charset.
 * @throw RuntimeException if this file handle represents a directory, if it is a {@link FileType#Classpath} or
 *        FileType#Internal file, or if it could not be written.
 */
public Writer writer(boolean append, String charset) {
    if (type == FileType.Classpath)
        throw new RuntimeException("Cannot write to a classpath file: " + file);
    parent().mkdirs();
    try {
        FileOutputStream output = new FileOutputStream(file(), append);
        if (charset == null)
            return new OutputStreamWriter(output);
        else
            return new OutputStreamWriter(output, charset);
    } catch (IOException ex) {
        if (file().isDirectory())
            throw new RuntimeException("Cannot open a stream to a directory: " + file + " (" + type + ")", ex);
        throw new RuntimeException("Error writing file: " + file + " (" + type + ")", ex);
    }
}
