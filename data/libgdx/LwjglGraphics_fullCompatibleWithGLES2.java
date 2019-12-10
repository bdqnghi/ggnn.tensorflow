/**
 * @return whether the supported OpenGL (not ES) version is compatible with OpenGL ES 2.x.
 */
private static boolean fullCompatibleWithGLES2() {
    // see https://www.opengl.org/registry/specs/ARB/ES2_compatibility.txt
    return isOpenGLOrHigher(4, 1) || extensions.contains("GL_ARB_ES2_compatibility", false);
}
