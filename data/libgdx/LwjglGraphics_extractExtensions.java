private static void extractExtensions() {
    extensions = new Array<String>();
    if (isOpenGLOrHigher(3, 2)) {
        int numExtensions = GL11.glGetInteger(GL30.GL_NUM_EXTENSIONS);
        for (int i = 0; i < numExtensions; ++i) extensions.add(org.lwjgl.opengl.GL30.glGetStringi(GL20.GL_EXTENSIONS, i));
    } else {
        extensions.addAll(org.lwjgl.opengl.GL11.glGetString(GL20.GL_EXTENSIONS).split(" "));
    }
}
