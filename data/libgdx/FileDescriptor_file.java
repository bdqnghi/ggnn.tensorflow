/**
 * Returns a java.io.File that represents this file handle. Note the returned file will only be usable for
 * {@link FileType#Absolute} and FileType#External file handles.
 */
public File file() {
    return file;
}
