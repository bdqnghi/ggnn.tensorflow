@Override
public void glCompressedTexSubImage2D(int target, int level, int xoffset, int yoffset, int width, int height, int format, int imageSize, Buffer data) {
    throw new GdxRuntimeException("compressed textures not supported by GWT WebGL backend");
}
