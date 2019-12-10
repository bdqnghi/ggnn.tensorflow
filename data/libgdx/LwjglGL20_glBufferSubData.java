public void glBufferSubData(int target, int offset, int size, Buffer data) {
    if (data == null)
        throw new GdxRuntimeException("Using null for the data not possible, blame LWJGL");
    else if (data instanceof ByteBuffer)
        GL15.glBufferSubData(target, offset, (ByteBuffer) data);
    else if (data instanceof IntBuffer)
        GL15.glBufferSubData(target, offset, (IntBuffer) data);
    else if (data instanceof FloatBuffer)
        GL15.glBufferSubData(target, offset, (FloatBuffer) data);
    else if (data instanceof DoubleBuffer)
        GL15.glBufferSubData(target, offset, (DoubleBuffer) data);
    else if (// 
    data instanceof ShortBuffer)
        GL15.glBufferSubData(target, offset, (ShortBuffer) data);
}
