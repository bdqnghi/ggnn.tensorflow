@Override
public void glClearStencil(int s) {
    calls++;
    gl30.glClearStencil(s);
    check();
}
