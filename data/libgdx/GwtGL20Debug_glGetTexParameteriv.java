@Override
public void glGetTexParameteriv(int target, int pname, IntBuffer params) {
    super.glGetTexParameteriv(target, pname, params);
    checkError();
}
