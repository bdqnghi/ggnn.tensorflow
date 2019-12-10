public void glGetTexParameteriv(int target, int pname, IntBuffer params) {
    GL.glGetTexParameteriv(target, pname, params, getPosition(params));
}
