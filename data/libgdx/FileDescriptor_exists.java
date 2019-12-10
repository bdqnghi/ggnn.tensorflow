/**
 * Returns true if the file exists. On Android, a {@link FileType#Classpath} or FileType#Internal handle to a directory will
 * always return false.
 */
public boolean exists() {
    if (type == FileType.Classpath)
        return FileDescriptor.class.getResource("/" + file.getPath().replace('\\', '/')) != null;
    return file().exists();
}
