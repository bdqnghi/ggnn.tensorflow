/**
 * Loads a shared library with the given name for the platform the application is running on. The name should not contain a
 * prefix (e.g. 'lib') or suffix (e.g. '.dll).
 * @param sharedLibName
 */
public synchronized void load(String sharedLibName) {
    if (loadedLibraries.contains(sharedLibName))
        return;
    boolean isWindows = System.getProperty("os.name").contains("Windows");
    boolean isLinux = System.getProperty("os.name").contains("Linux");
    boolean isMac = System.getProperty("os.name").contains("Mac");
    boolean isAndroid = false;
    boolean is64Bit = System.getProperty("os.arch").equals("amd64") || System.getProperty("os.arch").equals("x86_64");
    boolean isArm = System.getProperty("os.arch").equals("arm");
    String vm = System.getProperty("java.vm.name");
    if (vm != null && vm.contains("Dalvik")) {
        isAndroid = true;
        isWindows = false;
        isLinux = false;
        isMac = false;
        is64Bit = false;
    }
    boolean loaded = false;
    if (isWindows) {
        if (libraryFinder != null)
            loaded = loadLibrary(libraryFinder.getSharedLibraryNameWindows(sharedLibName, is64Bit, nativesZip));
        else if (!is64Bit)
            loaded = loadLibrary(sharedLibName + ".dll");
        else
            loaded = loadLibrary(sharedLibName + "64.dll");
    }
    if (isLinux) {
        if (libraryFinder != null)
            loaded = loadLibrary(libraryFinder.getSharedLibraryNameLinux(sharedLibName, is64Bit, isArm, nativesZip));
        else if (!is64Bit) {
            if (isArm)
                loaded = loadLibrary("lib" + sharedLibName + "Arm.so");
            else
                loaded = loadLibrary("lib" + sharedLibName + ".so");
        } else {
            if (isArm)
                loaded = loadLibrary("lib" + sharedLibName + "Arm64.so");
            else
                loaded = loadLibrary("lib" + sharedLibName + "64.so");
        }
    }
    if (isMac) {
        if (libraryFinder != null)
            loaded = loadLibrary(libraryFinder.getSharedLibraryNameMac(sharedLibName, is64Bit, nativesZip));
        else if (!is64Bit)
            loaded = loadLibrary("lib" + sharedLibName + ".dylib");
        else
            loaded = loadLibrary("lib" + sharedLibName + "64.dylib");
    }
    if (isAndroid) {
        if (libraryFinder != null)
            System.loadLibrary(libraryFinder.getSharedLibraryNameAndroid(sharedLibName, nativesZip));
        else
            System.loadLibrary(sharedLibName);
        loaded = true;
    }
    if (loaded)
        loadedLibraries.add(sharedLibName);
}
