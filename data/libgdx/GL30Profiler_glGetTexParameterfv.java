@Override
public void glGetTexParameterfv(int target, int pname, FloatBuffer params) {
    calls++;
    gl30.glGetTexParameterfv(target, pname, params);
    check();
}
