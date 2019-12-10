@Override
public void glDisable(int cap) {
    calls++;
    gl30.glDisable(cap);
    check();
}
