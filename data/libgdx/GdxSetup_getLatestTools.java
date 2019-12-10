private static String getLatestTools(File buildTools) {
    String version = null;
    int[] versionSplit = new int[3];
    int[] testSplit = new int[3];
    for (File toolsVersion : buildTools.listFiles()) {
        if (version == null) {
            version = readBuildToolsVersion(toolsVersion);
            versionSplit = convertTools(version);
            continue;
        }
        testSplit = convertTools(readBuildToolsVersion(toolsVersion));
        if (compareVersions(versionSplit, testSplit)) {
            version = readBuildToolsVersion(toolsVersion);
            versionSplit = convertTools(version);
        }
    }
    if (version != null) {
        return version;
    } else {
        return "0.0.0";
    }
}
