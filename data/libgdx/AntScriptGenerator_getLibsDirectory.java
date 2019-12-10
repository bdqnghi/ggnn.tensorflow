private String getLibsDirectory(BuildConfig config, BuildTarget target) {
    String targetName = target.osFileName;
    if (targetName == null)
        targetName = target.os.toString().toLowerCase() + (target.is64Bit ? "64" : "32");
    return config.libsDir.child(targetName).path().replace('\\', '/');
}
