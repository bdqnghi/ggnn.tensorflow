private boolean checkDirectoryValidity(String directory) {
    File checkFile = new File(directory);
    boolean path = true;
    // try to get the canonical path, if this fails the path is not valid
    try {
        checkFile.getCanonicalPath();
    } catch (Exception e) {
        path = false;
    }
    return path;
}
