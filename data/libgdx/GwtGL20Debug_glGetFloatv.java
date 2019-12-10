@Override
public void glGetFloatv(int pname, FloatBuffer params) {
    super.glGetFloatv(pname, params);
    checkError();
}
