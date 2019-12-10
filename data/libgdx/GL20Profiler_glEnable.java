@Override
public void glEnable(int cap) {
    calls++;
    gl20.glEnable(cap);
    check();
}
