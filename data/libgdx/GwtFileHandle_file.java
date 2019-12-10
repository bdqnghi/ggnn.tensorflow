/**
 * Returns a java.io.File that represents this file handle. Note the returned file will only be usable for
 * {@link FileType#Absolute} and {@link FileType#External} file handles.
 */
public File file() {
    throw new GdxRuntimeException("Not supported in GWT backend");
}
