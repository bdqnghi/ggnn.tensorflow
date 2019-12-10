/**
 * Returns the paths to the children of this directory with the specified suffix. Returns an empty list if this file handle
 * represents a file and not a directory. On the desktop, an {@link FileType#Internal} handle to a directory on the classpath
 * will return a zero length array.
 * @throw GdxRuntimeException if this file is an {@link FileType#Classpath} file.
 */
public FileHandle[] list(String suffix) {
    return preloader.list(file, suffix);
}
