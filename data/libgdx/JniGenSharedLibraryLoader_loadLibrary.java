private boolean loadLibrary(String sharedLibName) {
    if (sharedLibName == null)
        return false;
    String path = extractLibrary(sharedLibName);
    if (path != null)
        System.load(path);
    return path != null;
}
