@Override
public void glBindBuffer(int target, int buffer) {
    calls++;
    gl20.glBindBuffer(target, buffer);
    check();
}
