// Tries to load the bundle for the given locale.
private static I18NBundle loadBundle(FileHandle baseFileHandle, String encoding, Locale targetLocale) {
    I18NBundle bundle = null;
    Reader reader = null;
    try {
        FileHandle fileHandle = toFileHandle(baseFileHandle, targetLocale);
        if (checkFileExistence(fileHandle)) {
            // Instantiate the bundle
            bundle = new I18NBundle();
            // Load bundle properties from the stream with the specified encoding
            reader = fileHandle.reader(encoding);
            bundle.load(reader);
        }
    } catch (IOException e) {
        throw new GdxRuntimeException(e);
    } finally {
        StreamUtils.closeQuietly(reader);
    }
    if (bundle != null) {
        bundle.setLocale(targetLocale);
    }
    return bundle;
}
