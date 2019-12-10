public static boolean isLowerEqual(int major, int minor, int revision) {
    if (MAJOR != major)
        return MAJOR < major;
    if (MINOR != minor)
        return MINOR < minor;
    return REVISION <= revision;
}
