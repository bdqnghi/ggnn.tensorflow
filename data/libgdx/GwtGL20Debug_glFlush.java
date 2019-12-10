@Override
public void glFlush() {
    super.glFlush();
    checkError();
}
