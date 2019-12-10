@Override
public void glClear(int mask) {
    calls++;
    gl20.glClear(mask);
    check();
}
