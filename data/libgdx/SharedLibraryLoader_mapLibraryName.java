/**
 * Maps a platform independent library name to a platform dependent name.
 */
public String mapLibraryName(String libraryName) {
    if (isWindows)
        return libraryName + (is64Bit ? "64.dll" : ".dll");
    if (isLinux)
        return "lib" + libraryName + (isARM ? "arm" + abi : "") + (is64Bit ? "64.so" : ".so");
    if (isMac)
        return "lib" + libraryName + (is64Bit ? "64.dylib" : ".dylib");
    return libraryName;
}
