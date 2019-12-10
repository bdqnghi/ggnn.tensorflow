/**
 * Returns true if the parent directories of the file can be created and the file can be written.
 */
private boolean canWrite(File file) {
    File parent = file.getParentFile();
    File testFile;
    if (file.exists()) {
        if (!file.canWrite() || !canExecute(file))
            return false;
        // Don't overwrite existing file just to check if we can write to directory.
        testFile = new File(parent, UUID.randomUUID().toString());
    } else {
        parent.mkdirs();
        if (!parent.isDirectory())
            return false;
        testFile = file;
    }
    try {
        new FileOutputStream(testFile).close();
        if (!canExecute(testFile))
            return false;
        return true;
    } catch (Throwable ex) {
        return false;
    } finally {
        testFile.delete();
    }
}
