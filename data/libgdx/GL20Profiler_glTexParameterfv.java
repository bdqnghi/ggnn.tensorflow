@Override
public void glTexParameterfv(int target, int pname, FloatBuffer params) {
    calls++;
    gl20.glTexParameterfv(target, pname, params);
    check();
}
