@Override
public void glTexParameteriv(int target, int pname, IntBuffer params) {
    super.glTexParameteriv(target, pname, params);
    checkError();
}
