/**
 * Returns true if this file is a directory. Always returns false for classpath files. On Android, an {@link FileType#Internal}
 * handle to an empty directory will return false. On the desktop, an {@link FileType#Internal} handle to a directory on the
 * classpath will return false.
 */
public boolean isDirectory() {
    if (type == FileType.Classpath)
        return false;
    return file().isDirectory();
}
