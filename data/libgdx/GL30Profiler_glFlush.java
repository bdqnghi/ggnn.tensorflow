@Override
public void glFlush() {
    calls++;
    gl30.glFlush();
    check();
}
