private String getJniPlatform(TargetOs os) {
    if (os == TargetOs.Windows)
        return "win32";
    if (os == TargetOs.Linux)
        return "linux";
    if (os == TargetOs.MacOsX)
        return "mac";
    return "";
}
