@Override
public void glCompressedTexImage2D(int target, int level, int internalformat, int width, int height, int border, int imageSize, Buffer data) {
    calls++;
    gl20.glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
    check();
}
