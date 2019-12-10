/**
 * @return the path and filename without the extension, e.g. dir/dir2/file.png -> dir/dir2/file
 */
public String pathWithoutExtension() {
    String path = file;
    int dotIndex = path.lastIndexOf('.');
    if (dotIndex == -1)
        return path;
    return path.substring(0, dotIndex);
}
