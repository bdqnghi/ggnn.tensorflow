public static boolean isLower(int major, int minor, int revision) {
    return isLowerEqual(major, minor, revision - 1);
}
