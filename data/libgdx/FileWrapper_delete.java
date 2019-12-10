/**
 * Deletes this file or empty directory and returns success. Will not delete a directory that has children.
 * @throw GdxRuntimeException if this file handle is a {@link FileType#Classpath} or {@link FileType#Internal} file.
 */
public boolean delete() {
    if (type == FileType.Classpath)
        throw new GdxRuntimeException("Cannot delete a classpath file: " + file);
    if (type == FileType.Internal)
        throw new GdxRuntimeException("Cannot delete an internal file: " + file);
    return file().delete();
}
