@Override
public void consumeCustomData(int target) {
    Gdx.gl.glTexImage2D(target, mipLevel, internalFormat, width, height, 0, format, type, null);
}
