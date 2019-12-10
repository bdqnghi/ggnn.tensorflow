/**
 * Returns a handle to the child with the specified name.
 * @throw GdxRuntimeException if this file handle is a {@link FileType#Classpath} or {@link FileType#Internal} and the child
 *        doesn't exist.
 */
public FileHandle child(String name) {
    return new GwtFileHandle(preloader, (file.isEmpty() ? "" : (file + (file.endsWith("/") ? "" : "/"))) + name, FileType.Internal);
}
