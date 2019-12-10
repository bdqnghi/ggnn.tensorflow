/**
 * @return null if the file was extracted and loaded.
 */
private Throwable loadFile(String sourcePath, String sourceCrc, File extractedFile) {
    try {
        System.load(extractFile(sourcePath, sourceCrc, extractedFile).getAbsolutePath());
        return null;
    } catch (Throwable ex) {
        return ex;
    }
}
