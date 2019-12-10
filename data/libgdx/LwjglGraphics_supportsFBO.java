private static boolean supportsFBO() {
    // FBO is in core since OpenGL 3.0, see https://www.opengl.org/wiki/Framebuffer_Object
    return isOpenGLOrHigher(3, 0) || extensions.contains("GL_EXT_framebuffer_object", false) || extensions.contains("GL_ARB_framebuffer_object", false);
}
