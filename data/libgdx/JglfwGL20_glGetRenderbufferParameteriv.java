public void glGetRenderbufferParameteriv(int target, int pname, IntBuffer params) {
    GL.glGetRenderbufferParameterivEXT(target, pname, params, getPosition(params));
}
