@Override
public void glDepthMask(boolean flag) {
    calls++;
    gl30.glDepthMask(flag);
    check();
}
