/**
 * @throw GdxRuntimeException if this file handle is a {@link FileType#Classpath} or {@link FileType#Internal} file.
 */
public boolean mkdirs() {
    if (type == FileType.Classpath)
        throw new GdxRuntimeException("Cannot mkdirs with a classpath file: " + file);
    if (type == FileType.Internal)
        throw new GdxRuntimeException("Cannot mkdirs with an internal file: " + file);
    return file().mkdirs();
}
