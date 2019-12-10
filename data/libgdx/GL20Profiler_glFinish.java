@Override
public void glFinish() {
    calls++;
    gl20.glFinish();
    check();
}
