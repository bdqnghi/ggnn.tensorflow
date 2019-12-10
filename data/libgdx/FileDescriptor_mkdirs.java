/**
 * @throw RuntimeException if this file handle is a {@link FileType#Classpath} or FileType#Internal file.
 */
public boolean mkdirs() {
    if (type == FileType.Classpath)
        throw new RuntimeException("Cannot mkdirs with a classpath file: " + file);
    return file().mkdirs();
}
