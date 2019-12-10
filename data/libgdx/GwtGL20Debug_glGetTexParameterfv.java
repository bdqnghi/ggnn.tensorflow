@Override
public void glGetTexParameterfv(int target, int pname, FloatBuffer params) {
    super.glGetTexParameterfv(target, pname, params);
    checkError();
}
