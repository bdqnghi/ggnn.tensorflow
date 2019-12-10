/**
 * Copies this file or directory to the specified file or directory. If this handle is a file, then 1) if the destination is a
 * file, it is overwritten, or 2) if the destination is a directory, this file is copied into it, or 3) if the destination
 * doesn't exist, {@link #mkdirs()} is called on the destination's parent and this file is copied into it with a new name. If
 * this handle is a directory, then 1) if the destination is a file, RuntimeException is thrown, or 2) if the destination is a
 * directory, this directory is copied recursively into it as a subdirectory, overwriting existing files, or 3) if the
 * destination doesn't exist, {@link #mkdirs()} is called on the destination and this directory is copied recursively into it
 * as a subdirectory.
 * @throw RuntimeException if the destination file handle is a {@link FileType#Classpath} or FileType#Internal file, or copying
 *        failed.
 */
public void copyTo(FileDescriptor dest) {
    if (!isDirectory()) {
        if (dest.isDirectory())
            dest = dest.child(name());
        copyFile(this, dest);
        return;
    }
    if (dest.exists()) {
        if (!dest.isDirectory())
            throw new RuntimeException("Destination exists but is not a directory: " + dest);
    } else {
        dest.mkdirs();
        if (!dest.isDirectory())
            throw new RuntimeException("Destination directory cannot be created: " + dest);
    }
    dest = dest.child(name());
    copyDirectory(this, dest);
}
