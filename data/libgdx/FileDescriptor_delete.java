/**
 * Deletes this file or empty directory and returns success. Will not delete a directory that has children.
 * @throw RuntimeException if this file handle is a {@link FileType#Classpath} or FileType#Internal file.
 */
public boolean delete() {
    if (type == FileType.Classpath)
        throw new RuntimeException("Cannot delete a classpath file: " + file);
    return file().delete();
}
