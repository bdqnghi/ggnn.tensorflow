/**
 * Setting a SharedLibraryFinder enables you to load libraries according to a nondefault natives jar layout or library names.
 * @param libraryFinder
 */
public void setSharedLibraryFinder(SharedLibraryFinder libraryFinder) {
    this.libraryFinder = libraryFinder;
    if (nativesJar != null) {
        try {
            nativesZip = new ZipFile(nativesJar);
        } catch (IOException e) {
            nativesZip = null;
        }
    }
}
