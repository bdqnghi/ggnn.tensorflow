private static boolean compareVersions(int[] version, int[] testVersion) {
    if (testVersion[0] > version[0]) {
        return true;
    } else if (testVersion[0] == version[0]) {
        if (testVersion[1] > version[1]) {
            return true;
        } else if (testVersion[1] == version[1]) {
            return testVersion[2] > version[2];
        }
    }
    return false;
}
