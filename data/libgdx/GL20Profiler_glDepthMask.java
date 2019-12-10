@Override
public void glDepthMask(boolean flag) {
    calls++;
    gl20.glDepthMask(flag);
    check();
}
