/**
 * Returns a java.io.File that represents this file handle. Note the returned file will only be usable for
 * {@link FileType#Absolute} and {@link FileType#External} file handles.
 */
public File file() {
    if (type == FileType.External)
        return new File(Gdx.files.getExternalStoragePath(), file.getPath());
    return file;
}
