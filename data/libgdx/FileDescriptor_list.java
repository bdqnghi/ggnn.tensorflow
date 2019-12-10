/**
 * Returns the paths to the children of this directory with the specified suffix. Returns an empty list if this file handle
 * represents a file and not a directory. On the desktop, an FileType#Internal handle to a directory on the classpath will
 * return a zero length array.
 * @throw RuntimeException if this file is an {@link FileType#Classpath} file.
 */
public FileDescriptor[] list(String suffix) {
    if (type == FileType.Classpath)
        throw new RuntimeException("Cannot list a classpath directory: " + file);
    String[] relativePaths = file().list();
    if (relativePaths == null)
        return new FileDescriptor[0];
    FileDescriptor[] handles = new FileDescriptor[relativePaths.length];
    int count = 0;
    for (int i = 0, n = relativePaths.length; i < n; i++) {
        String path = relativePaths[i];
        if (!path.endsWith(suffix))
            continue;
        handles[count] = child(path);
        count++;
    }
    if (count < relativePaths.length) {
        FileDescriptor[] newHandles = new FileDescriptor[count];
        System.arraycopy(handles, 0, newHandles, 0, count);
        handles = newHandles;
    }
    return handles;
}
