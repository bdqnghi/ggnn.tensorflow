@Override
public void glGetInteger64v(int pname, LongBuffer params) {
    calls++;
    gl30.glGetInteger64v(pname, params);
    check();
}
