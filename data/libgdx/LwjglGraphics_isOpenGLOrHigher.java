/**
 * @return whether the supported OpenGL (not ES) version is equal or higher to the specified version.
 */
private static boolean isOpenGLOrHigher(int major, int minor) {
    return LwjglGraphics.major > major || (LwjglGraphics.major == major && LwjglGraphics.minor >= minor);
}
