public void glBufferSubData(int target, int offset, int size, Buffer data) {
    GL.glBufferSubData(target, offset, size, data, getPosition(data));
}
