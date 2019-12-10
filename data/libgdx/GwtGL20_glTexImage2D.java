@Override
public void glTexImage2D(int target, int level, int internalformat, int width, int height, int border, int format, int type, Buffer pixels) {
    if (pixels == null) {
        gl.texImage2D(target, level, internalformat, width, height, border, format, type, null);
    } else {
        if (pixels.limit() > 1) {
            HasArrayBufferView arrayHolder = (HasArrayBufferView) pixels;
            ArrayBufferView webGLArray = arrayHolder.getTypedArray();
            int remainingBytes = pixels.remaining() * 4;
            int byteOffset = webGLArray.byteOffset() + pixels.position() * 4;
            Uint8Array buffer = Uint8ArrayNative.create(webGLArray.buffer(), byteOffset, remainingBytes);
            gl.texImage2D(target, level, internalformat, width, height, border, format, type, buffer);
        } else {
            Pixmap pixmap = Pixmap.pixmaps.get(((IntBuffer) pixels).get(0));
            gl.texImage2D(target, level, internalformat, format, type, pixmap.getCanvasElement());
        }
    }
}
