@Override
public void glGetTexParameterfv(int target, int pname, FloatBuffer params) {
    calls++;
    gl20.glGetTexParameterfv(target, pname, params);
    check();
}
