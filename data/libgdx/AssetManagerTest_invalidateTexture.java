private void invalidateTexture(Texture texture) {
    IntBuffer buffer = BufferUtils.newIntBuffer(1);
    buffer.put(0, texture.getTextureObjectHandle());
    Gdx.gl.glDeleteTextures(1, buffer);
}
