/**
 * @return whether the supported OpenGL (not ES) version is compatible with OpenGL ES 3.x.
 */
private static boolean fullCompatibleWithGLES3() {
    // OpenGL ES 3.0 is compatible with OpenGL 4.3 core, see http://en.wikipedia.org/wiki/OpenGL_ES#OpenGL_ES_3.0
    return isOpenGLOrHigher(4, 3);
}
