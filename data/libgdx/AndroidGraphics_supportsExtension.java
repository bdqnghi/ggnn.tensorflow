@Override
public boolean supportsExtension(String extension) {
    if (extensions == null)
        extensions = Gdx.gl.glGetString(GL10.GL_EXTENSIONS);
    return extensions.contains(extension);
}
