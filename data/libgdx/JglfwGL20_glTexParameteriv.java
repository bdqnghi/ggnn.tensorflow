public void glTexParameteriv(int target, int pname, IntBuffer params) {
    GL.glTexParameteriv(target, pname, params, getPosition(params));
}
