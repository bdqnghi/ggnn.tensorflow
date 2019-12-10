@Override
public void glGetFloatv(int pname, FloatBuffer params) {
    calls++;
    gl30.glGetFloatv(pname, params);
    check();
}
