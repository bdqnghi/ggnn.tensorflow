@Override
public void glBufferData(int target, int size, Buffer data, int usage) {
    calls++;
    gl30.glBufferData(target, size, data, usage);
    check();
}
