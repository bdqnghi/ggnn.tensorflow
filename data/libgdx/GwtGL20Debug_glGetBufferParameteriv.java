@Override
public void glGetBufferParameteriv(int target, int pname, IntBuffer params) {
    super.glGetBufferParameteriv(target, pname, params);
    checkError();
}
