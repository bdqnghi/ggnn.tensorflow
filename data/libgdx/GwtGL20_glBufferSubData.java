@Override
public void glBufferSubData(int target, int offset, int size, Buffer data) {
    if (data instanceof FloatBuffer) {
        gl.bufferSubData(target, offset, copy((FloatBuffer) data));
    } else if (data instanceof ShortBuffer) {
        gl.bufferSubData(target, offset, copy((ShortBuffer) data));
    } else {
        throw new GdxRuntimeException("Can only cope with FloatBuffer and ShortBuffer at the moment");
    }
}
