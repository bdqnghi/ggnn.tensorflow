@Override
public void glCompressedTexImage2D(int target, int level, int internalformat, int width, int height, int border, int imageSize, Buffer data) {
    throw new GdxRuntimeException("compressed textures not supported by GWT WebGL backend");
}
