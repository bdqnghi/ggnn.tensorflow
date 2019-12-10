@Override
public void glTexSubImage2D(int target, int level, int xoffset, int yoffset, int width, int height, int format, int type, Buffer pixels) {
    if (pixels.limit() > 1) {
        HasArrayBufferView arrayHolder = (HasArrayBufferView) pixels;
        ArrayBufferView webGLArray = arrayHolder.getTypedArray();
        int remainingBytes = pixels.remaining() * 4;
        int byteOffset = webGLArray.byteOffset() + pixels.position() * 4;
        Uint8Array buffer = Uint8ArrayNative.create(webGLArray.buffer(), byteOffset, remainingBytes);
        gl.texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, buffer);
    } else {
        Pixmap pixmap = Pixmap.pixmaps.get(((IntBuffer) pixels).get(0));
        gl.texSubImage2D(target, level, xoffset, yoffset, format, type, pixmap.getCanvasElement());
    }
}
