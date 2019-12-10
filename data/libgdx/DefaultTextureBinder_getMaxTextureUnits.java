private static int getMaxTextureUnits() {
    IntBuffer buffer = BufferUtils.newIntBuffer(16);
    Gdx.gl.glGetIntegerv(GL20.GL_MAX_TEXTURE_IMAGE_UNITS, buffer);
    return buffer.get(0);
}
