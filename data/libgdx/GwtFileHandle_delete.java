/**
 * Deletes this file or empty directory and returns success. Will not delete a directory that has children.
 * @throw GdxRuntimeException if this file handle is a {@link FileType#Classpath} or {@link FileType#Internal} file.
 */
public boolean delete() {
    throw new GdxRuntimeException("Cannot delete an internal file: " + file);
}
