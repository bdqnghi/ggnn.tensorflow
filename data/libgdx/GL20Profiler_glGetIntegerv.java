@Override
public void glGetIntegerv(int pname, IntBuffer params) {
    calls++;
    gl20.glGetIntegerv(pname, params);
    check();
}
