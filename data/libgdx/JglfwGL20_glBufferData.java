public void glBufferData(int target, int size, Buffer data, int usage) {
    GL.glBufferData(target, size, data, getPosition(data), usage);
}
