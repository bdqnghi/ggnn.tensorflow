private String getSharedLibFilename(TargetOs os, boolean is64Bit, String sharedLibName) {
    // generate shared lib prefix and suffix, determine jni platform headers directory
    String libPrefix = "";
    String libSuffix = "";
    if (os == TargetOs.Windows) {
        libSuffix = (is64Bit ? "64" : "") + ".dll";
    }
    if (os == TargetOs.Linux || os == TargetOs.Android) {
        libPrefix = "lib";
        libSuffix = (is64Bit ? "64" : "") + ".so";
    }
    if (os == TargetOs.MacOsX) {
        libPrefix = "lib";
        libSuffix = (is64Bit ? "64" : "") + ".dylib";
    }
    if (os == TargetOs.IOS) {
        libPrefix = "lib";
        libSuffix = ".a";
    }
    return libPrefix + sharedLibName + libSuffix;
}
