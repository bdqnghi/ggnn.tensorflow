/**
 * Returns a path to a file that can be written. Tries multiple locations and verifies writing succeeds.
 * @return null if a writable path could not be found.
 */
private File getExtractedFile(String dirName, String fileName) {
    // Temp directory with username in path.
    File idealFile = new File(System.getProperty("java.io.tmpdir") + "/libgdx" + System.getProperty("user.name") + "/" + dirName, fileName);
    if (canWrite(idealFile))
        return idealFile;
    // System provided temp directory.
    try {
        File file = File.createTempFile(dirName, null);
        if (file.delete()) {
            file = new File(file, fileName);
            if (canWrite(file))
                return file;
        }
    } catch (IOException ignored) {
    }
    // User home.
    File file = new File(System.getProperty("user.home") + "/.libgdx/" + dirName, fileName);
    if (canWrite(file))
        return file;
    // Relative directory.
    file = new File(".temp/" + dirName, fileName);
    if (canWrite(file))
        return file;
    return null;
}
