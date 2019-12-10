@Override
public void glEnable(int cap) {
    calls++;
    gl30.glEnable(cap);
    check();
}
