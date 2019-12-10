@Override
public void glGetRenderbufferParameteriv(int target, int pname, IntBuffer params) {
    super.glGetRenderbufferParameteriv(target, pname, params);
    checkError();
}
