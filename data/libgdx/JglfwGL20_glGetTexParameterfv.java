public void glGetTexParameterfv(int target, int pname, FloatBuffer params) {
    GL.glGetTexParameterfv(target, pname, params, getPosition(params));
}
