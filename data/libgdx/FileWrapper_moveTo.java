/**
 * Moves this file to the specified file, overwriting the file if it already exists.
 * @throw GdxRuntimeException if the source or destination file handle is a {@link FileType#Classpath} or
 *        {@link FileType#Internal} file.
 */
public void moveTo(FileWrapper dest) {
    if (type == FileType.Classpath)
        throw new GdxRuntimeException("Cannot move a classpath file: " + file);
    if (type == FileType.Internal)
        throw new GdxRuntimeException("Cannot move an internal file: " + file);
    copyTo(dest);
    delete();
}
