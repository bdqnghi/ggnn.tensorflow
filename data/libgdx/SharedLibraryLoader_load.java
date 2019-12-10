/**
 * Loads a shared library for the platform the application is running on.
 * @param libraryName The platform independent library name. If not contain a prefix (eg lib) or suffix (eg .dll).
 */
public synchronized void load(String libraryName) {
    // in case of iOS, things have been linked statically to the executable, bail out.
    if (isIos)
        return;
    libraryName = mapLibraryName(libraryName);
    if (loadedLibraries.contains(libraryName))
        return;
    try {
        if (isAndroid)
            System.loadLibrary(libraryName);
        else
            loadFile(libraryName);
    } catch (Throwable ex) {
        throw new GdxRuntimeException("Couldn't load shared library '" + libraryName + "' for target: " + System.getProperty("os.name") + (is64Bit ? ", 64-bit" : ", 32-bit"), ex);
    }
    loadedLibraries.add(libraryName);
}
