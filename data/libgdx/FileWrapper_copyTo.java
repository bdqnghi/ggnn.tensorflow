/**
 * Copies this file or directory to the specified file or directory. If this handle is a file, then 1) if the destination is a
 * file, it is overwritten, or 2) if the destination is a directory, this file is copied into it, or 3) if the destination
 * doesn't exist, {@link #mkdirs()} is called on the destination's parent and this file is copied into it with a new name. If
 * this handle is a directory, then 1) if the destination is a file, GdxRuntimeException is thrown, or 2) if the destination is
 * a directory, this directory is copied into it recursively, overwriting existing files, or 3) if the destination doesn't
 * exist, {@link #mkdirs()} is called on the destination and this directory is copied into it recursively.
 * @throw GdxRuntimeException if the destination file handle is a {@link FileType#Classpath} or {@link FileType#Internal} file,
 *        or copying failed.
 */
public void copyTo(FileWrapper dest) {
    boolean sourceDir = isDirectory();
    if (!sourceDir) {
        if (dest.isDirectory())
            dest = dest.child(name());
        copyFile(this, dest);
        return;
    }
    if (dest.exists()) {
        if (!dest.isDirectory())
            throw new GdxRuntimeException("Destination exists but is not a directory: " + dest);
    } else {
        dest.mkdirs();
        if (!dest.isDirectory())
            throw new GdxRuntimeException("Destination directory cannot be created: " + dest);
    }
    if (!sourceDir)
        dest = dest.child(name());
    copyDirectory(this, dest);
}
