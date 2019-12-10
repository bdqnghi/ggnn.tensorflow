/**
 * Moves this file to the specified file, overwriting the file if it already exists.
 * @throw RuntimeException if the source or destination file handle is a {@link FileType#Classpath} or FileType#Internal file.
 */
public void moveTo(FileDescriptor dest) {
    if (type == FileType.Classpath)
        throw new RuntimeException("Cannot move a classpath file: " + file);
    copyTo(dest);
    delete();
}
