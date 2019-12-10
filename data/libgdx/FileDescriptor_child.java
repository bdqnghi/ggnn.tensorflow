/**
 * Returns a handle to the child with the specified name.
 * @throw RuntimeException if this file handle is a {@link FileType#Classpath} or FileType#Internal and the child doesn't
 *        exist.
 */
public FileDescriptor child(String name) {
    if (file.getPath().length() == 0)
        return new FileDescriptor(new File(name), type);
    return new FileDescriptor(new File(file, name), type);
}
