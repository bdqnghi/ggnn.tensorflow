@Override
public void glGetIntegerv(int pname, IntBuffer params) {
    calls++;
    gl30.glGetIntegerv(pname, params);
    check();
}
