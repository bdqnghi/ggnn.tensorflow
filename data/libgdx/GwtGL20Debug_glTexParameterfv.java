@Override
public void glTexParameterfv(int target, int pname, FloatBuffer params) {
    super.glTexParameterfv(target, pname, params);
    checkError();
}
