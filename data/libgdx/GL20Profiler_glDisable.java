@Override
public void glDisable(int cap) {
    calls++;
    gl20.glDisable(cap);
    check();
}
