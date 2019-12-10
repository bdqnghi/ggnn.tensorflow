public void glGetBufferParameteriv(int target, int pname, IntBuffer params) {
    GL.glGetBufferParameteriv(target, pname, params, getPosition(params));
}
