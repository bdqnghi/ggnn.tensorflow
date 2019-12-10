public void glTexParameterfv(int target, int pname, FloatBuffer params) {
    GL.glTexParameterfv(target, pname, params, getPosition(params));
}
