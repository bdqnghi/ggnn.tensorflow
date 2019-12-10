@Override
public void glHint(int target, int mode) {
    calls++;
    gl30.glHint(target, mode);
    check();
}
