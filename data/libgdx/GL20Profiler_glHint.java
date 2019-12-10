@Override
public void glHint(int target, int mode) {
    calls++;
    gl20.glHint(target, mode);
    check();
}
