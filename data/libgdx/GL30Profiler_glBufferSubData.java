@Override
public void glBufferSubData(int target, int offset, int size, Buffer data) {
    calls++;
    gl30.glBufferSubData(target, offset, size, data);
    check();
}
