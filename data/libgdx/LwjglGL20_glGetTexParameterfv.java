public void glGetTexParameterfv(int target, int pname, FloatBuffer params) {
    GL11.glGetTexParameter(target, pname, params);
}
