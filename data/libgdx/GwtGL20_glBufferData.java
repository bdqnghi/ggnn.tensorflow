@Override
public void glBufferData(int target, int size, Buffer data, int usage) {
    if (data instanceof FloatBuffer) {
        gl.bufferData(target, copy((FloatBuffer) data), usage);
    } else if (data instanceof ShortBuffer) {
        gl.bufferData(target, copy((ShortBuffer) data), usage);
    } else {
        throw new GdxRuntimeException("Can only cope with FloatBuffer and ShortBuffer at the moment");
    }
}
