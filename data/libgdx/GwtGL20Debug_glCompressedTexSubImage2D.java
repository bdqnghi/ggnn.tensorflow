@Override
public void glCompressedTexSubImage2D(int target, int level, int xoffset, int yoffset, int width, int height, int format, int imageSize, Buffer data) {
    super.glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    checkError();
}
