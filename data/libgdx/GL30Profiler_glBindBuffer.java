@Override
public void glBindBuffer(int target, int buffer) {
    calls++;
    gl30.glBindBuffer(target, buffer);
    check();
}
