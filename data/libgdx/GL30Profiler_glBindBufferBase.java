@Override
public void glBindBufferBase(int target, int index, int buffer) {
    calls++;
    gl30.glBindBufferBase(target, index, buffer);
    check();
}
