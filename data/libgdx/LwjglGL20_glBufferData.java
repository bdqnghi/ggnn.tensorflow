public void glBufferData(int target, int size, Buffer data, int usage) {
    if (data == null)
        GL15.glBufferData(target, size, usage);
    else if (data instanceof ByteBuffer)
        GL15.glBufferData(target, (ByteBuffer) data, usage);
    else if (data instanceof IntBuffer)
        GL15.glBufferData(target, (IntBuffer) data, usage);
    else if (data instanceof FloatBuffer)
        GL15.glBufferData(target, (FloatBuffer) data, usage);
    else if (data instanceof DoubleBuffer)
        GL15.glBufferData(target, (DoubleBuffer) data, usage);
    else if (// 
    data instanceof ShortBuffer)
        GL15.glBufferData(target, (ShortBuffer) data, usage);
}
