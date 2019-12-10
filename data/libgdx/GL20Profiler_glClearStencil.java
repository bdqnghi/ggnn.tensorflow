@Override
public void glClearStencil(int s) {
    calls++;
    gl20.glClearStencil(s);
    check();
}
