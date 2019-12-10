/**
 * Returns a handle to the child with the specified name.
 * @throw GdxRuntimeException if this file handle is a {@link FileType#Classpath} or {@link FileType#Internal} and the child
 *        doesn't exist.
 */
public FileWrapper child(String name) {
    if (file.getPath().length() == 0)
        return new FileWrapper(new File(name), type);
    return new FileWrapper(new File(file, name), type);
}
