public static boolean isHigher(int major, int minor, int revision) {
    return isHigherEqual(major, minor, revision + 1);
}
