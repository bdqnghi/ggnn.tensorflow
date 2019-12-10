@Override
public void glReadPixels(int x, int y, int width, int height, int format, int type, Buffer pixels) {
    // verify request
    if ((format != WebGLRenderingContext.RGBA) || (type != WebGLRenderingContext.UNSIGNED_BYTE)) {
        throw new GdxRuntimeException("Only format RGBA and type UNSIGNED_BYTE are currently supported for glReadPixels(...).");
    }
    if (!(pixels instanceof ByteBuffer)) {
        throw new GdxRuntimeException("Inputed pixels buffer needs to be of type ByteBuffer for glReadPixels(...).");
    }
    // create new ArrayBufferView (4 bytes per pixel)
    int size = 4 * width * height;
    Uint8Array buffer = Uint8ArrayNative.create(size);
    // read bytes to ArrayBufferView
    gl.readPixels(x, y, width, height, format, type, buffer);
    // copy ArrayBufferView to our pixels array
    ByteBuffer pixelsByte = (ByteBuffer) pixels;
    for (int i = 0; i < size; i++) {
        pixelsByte.put((byte) (buffer.get(i) & 0x000000ff));
    }
}
