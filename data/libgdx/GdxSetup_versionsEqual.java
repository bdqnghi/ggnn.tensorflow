private static boolean versionsEqual(int[] testVersion, int[] targetVersion) {
    for (int i = 0; i < 3; i++) {
        if (testVersion[i] != targetVersion[i])
            return false;
    }
    return true;
}
