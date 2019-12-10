@Override
public void glGetFloatv(int pname, FloatBuffer params) {
    calls++;
    gl20.glGetFloatv(pname, params);
    check();
}
