@Override
public void glGetIntegerv(int pname, IntBuffer params) {
    super.glGetIntegerv(pname, params);
    checkError();
}
