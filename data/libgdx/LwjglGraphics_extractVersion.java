private static void extractVersion() {
    // See https://www.opengl.org/wiki/GLAPI/glGetString, format is:
    // <major> "." <minor> ("." <release>) (<space> (<vendor_specific_info>))
    String version = org.lwjgl.opengl.GL11.glGetString(GL11.GL_VERSION);
    try {
        String[] v = version.split(" ", 2)[0].split("\\.", 3);
        major = Integer.parseInt(v[0]);
        minor = Integer.parseInt(v[1]);
        release = v.length > 2 ? Integer.parseInt(v[2]) : 0;
    } catch (Throwable t) {
        throw new GdxRuntimeException("Error extracting the OpenGL version: " + version, t);
    }
}
