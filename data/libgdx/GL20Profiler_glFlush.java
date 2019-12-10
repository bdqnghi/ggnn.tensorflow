@Override
public void glFlush() {
    calls++;
    gl20.glFlush();
    check();
}
