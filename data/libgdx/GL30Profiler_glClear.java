@Override
public void glClear(int mask) {
    calls++;
    gl30.glClear(mask);
    check();
}
